var fs = require('graceful-fs')
var data = require('@pkmn/data')
var moves = require('./moves.ts')
var pokedex = require('./pokedex.ts')
var deepmerge = require('deepmerge')
var learnsetsL = require('./learnsets_legacy.ts')
var learnsetsM = require('./learnsets_modern.ts')
var learnsets = deepmerge(learnsetsM, learnsetsL)
var Pokedex = require('pokedex-promise-v2');
var P = new Pokedex();
var toID = data.toID;

