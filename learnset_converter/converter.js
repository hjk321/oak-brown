var fs = require('graceful-fs')
var data = require('@pkmn/data')
var moves = require('./moves.ts')
var pokedex = require('./pokedex.ts')
var deepmerge = require('deepmerge')
var learnsetsL = require('./learnsets_legacy.ts')
var learnsetsM = require('./learnsets_modern.ts')
var learnsets = deepmerge(learnsetsM, learnsetsL)
var Pokedex = require("pokeapi-js-wrapper")
var P = new Pokedex.Pokedex();
var toID = data.toID;

function capitalizeFirstLetter(string) {
  return string.charAt(0).toUpperCase() + string.slice(1);
}

var levelUpLearnsets = '';
for (i = 1; i < 701; i++) {
	if (i > 649 && i < 700) continue;
	(async () => {
		var response = await P.resource(['/api/v2/pokemon/' + i])
		levelUpLearnsets += 'static const u16 s' + capitalizeFirstLetter(response[0].species.name) + 'LevelUpLearnset' + '[] = {\n';
		var learnset = response[0].moves;
		for (moveDetails of learnset) {
			var move = moveDetails.move.name;
			var versionGroupDetails = moveDetails.version_group_details;
			for (versionSelect of versionGroupDetails) {
				var level = versionSelect.level_learned_at;
				var version = versionSelect.version_group.name;
				var moveLearnMethod = versionSelect.move_learn_method.name;
				if (version == 'ultra-sun-ultra-moon' && moveLearnMethod == 'level-up' && (moves[toID(move)].num < 355 || moves[toID(move)].num == 412)) levelUpLearnsets += '\tLEVEL_UP_MOVE(' + level + ', MOVE_' + moves[toID(move)].name.toUpperCase().replace('FEINT', 'FAINT').replace('HIGH JUMP', 'HI JUMP').replace('VISE', 'VICE').replace('SALTS', 'SALT').replace(/ /g, '_').replace(/-/g, '_') + '),\n';
			}
		}
		levelUpLearnsets += '\tLEVEL_UP_END\n};\n\n'
		fs.writeFile('level_up_learnsets.h', levelUpLearnsets);
	})()
}

function sleep(ms) { 
	return new Promise((resolve) =>
	 { 
	setTimeout(resolve, ms);
	 }); 
}
