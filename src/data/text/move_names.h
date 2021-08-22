const u8 gMoveNames[][13] = {
    _("-$$$$$$"),
    _("Pound"),
    _("Karate Chop"),
    _("Doubleslap"),
    _("Comet Punch"),
    _("Mega Punch"),
    _("Pay Day"),
    _("Fire Punch"),
    _("Ice Punch"),
    _("Thunderpunch"),
    _("Scratch"),
    _("Vicegrip"),
    _("Guillotine"),
    _("Razor Wind"),
    _("Swords Dance"),
    _("Cut"),
    _("Gust"),
    _("Wing Attack"),
    _("Whirlwind"),
    _("Fly"),
    _("Bind"),
    _("Slam"),
    _("Vine Whip"),
    _("Stomp"),
    _("Double Kick"),
    _("Mega Kick"),
    _("Jump Kick"),
    _("Rolling Kick"),
    _("Sand-Attack"),
    _("Headbutt"),
    _("Horn Attack"),
    _("Fury Attack"),
    _("Horn Drill"),
    _("Tackle"),
    _("Body Slam"),
    _("Wrap"),
    _("Take Down"),
    _("Thrash"),
    _("Double-Edge"),
    _("Tail Whip"),
    _("Poison Sting"),
    _("Twineedle"),
    _("Pin Missile"),
    _("Leer"),
    _("Bite"),
    _("Growl"),
    _("Roar"),
    _("Sing"),
    _("Supersonic"),
    _("Sonicboom"),
    _("Disable"),
    _("Acid"),
    _("Ember"),
    _("Flamethrower"),
    _("Mist"),
    _("Water Gun"),
    _("Hydro Pump"),
    _("Surf"),
    _("Ice Beam"),
    _("Blizzard"),
    _("Psybeam"),
    _("Bubblebeam"),
    _("Aurora Beam"),
    _("Hyper Beam"),
    _("Peck"),
    _("Drill Peck"),
    _("Submission"),
    _("Low Kick"),
    _("Counter"),
    _("Seismic Toss"),
    _("Strength"),
    _("Absorb"),
    _("Mega Drain"),
    _("Leech Seed"),
    _("Growth"),
    _("Razor Leaf"),
    _("Solarbeam"),
    _("Poisonpowder"),
    _("Stun Spore"),
    _("Sleep Powder"),
    _("Petal Dance"),
    _("String Shot"),
    _("Dragon Rage"),
    _("Fire Spin"),
    _("Thundershock"),
    _("Thunderbolt"),
    _("Thunder Wave"),
    _("Thunder"),
    _("Rock Throw"),
    _("Earthquake"),
    _("Fissure"),
    _("Dig"),
    _("Toxic"),
    _("Confusion"),
    _("Psychic"),
    _("Hypnosis"),
    _("Meditate"),
    _("Agility"),
    _("Quick Attack"),
    _("Rage"),
    _("Teleport"),
    _("Night Shade"),
    _("Mimic"),
    _("Screech"),
    _("Double Team"),
    _("Recover"),
    _("Harden"),
    _("Minimize"),
    _("Smokescreen"),
    _("Confuse Ray"),
    _("Withdraw"),
    _("Defense Curl"),
    _("Barrier"),
    _("Light Screen"),
    _("Haze"),
    _("Reflect"),
    _("Focus Energy"),
    _("Bide"),
    _("Metronome"),
    _("Mirror Move"),
    _("Selfdestruct"),
    _("Egg Bomb"),
    _("Lick"),
    _("Smog"),
    _("Sludge"),
    _("Bone Club"),
    _("Fire Blast"),
    _("Waterfall"),
    _("Clamp"),
    _("Swift"),
    _("Skull Bash"),
    _("Spike Cannon"),
    _("Constrict"),
    _("Amnesia"),
    _("Kinesis"),
    _("Softboiled"),
    _("Hi Jump Kick"),
    _("Glare"),
    _("Dream Eater"),
    _("Poison Gas"),
    _("Barrage"),
    _("Leech Life"),
    _("Lovely Kiss"),
    _("Sky Attack"),
    _("Transform"),
    _("Bubble"),
    _("Dizzy Punch"),
    _("Spore"),
    _("Flash"),
    _("Psywave"),
    _("Splash"),
    _("Acid Armor"),
    _("Crabhammer"),
    _("Explosion"),
    _("Fury Swipes"),
    _("Bonemerang"),
    _("Rest"),
    _("Rock Slide"),
    _("Hyper Fang"),
    _("Sharpen"),
    _("Conversion"),
    _("Tri Attack"),
    _("Super Fang"),
    _("Slash"),
    _("Substitute"),
    _("Struggle"),
    _("Sketch"),
    _("Triple Kick"),
    _("Thief"),
    _("Spider Web"),
    _("Mind Reader"),
    _("NIGHTMARE"),
    _("Flame Wheel"),
    _("Snore"),
    _("Curse"),
    _("Flail"),
    _("Conversion 2"),
    _("Aeroblast"),
    _("Cotton Spore"),
    _("Reversal"),
    _("Spite"),
    _("Powder Snow"),
    _("Protect"),
    _("Mach Punch"),
    _("Scary Face"),
    _("Faint Attack"),
    _("Sweet Kiss"),
    _("Belly Drum"),
    _("Sludge Bomb"),
    _("Mud-Slap"),
    _("Octazooka"),
    _("Spikes"),
    _("Zap Cannon"),
    _("Foresight"),
    _("Destiny Bond"),
    _("Perish Song"),
    _("Icy Wind"),
    _("Detect"),
    _("Bone Rush"),
    _("Lock-On"),
    _("Outrage"),
    _("Sandstorm"),
    _("Giga Drain"),
    _("Endure"),
    _("Charm"),
    _("Rollout"),
    _("False Swipe"),
    _("Swagger"),
    _("Milk Drink"),
    _("Spark"),
    _("Fury Cutter"),
    _("Steel Wing"),
    _("Mean Look"),
    _("Attract"),
    _("Sleep Talk"),
    _("Heal Bell"),
    _("Return"),
    _("Present"),
    _("Frustration"),
    _("Safeguard"),
    _("Pain Split"),
    _("Sacred Fire"),
    _("Magnitude"),
    _("Dynamicpunch"),
    _("Megahorn"),
    _("Dragonbreath"),
    _("Baton Pass"),
    _("Encore"),
    _("Pursuit"),
    _("Rapid Spin"),
    _("Sweet Scent"),
    _("Iron Tail"),
    _("Metal Claw"),
    _("Vital Throw"),
    _("Morning Sun"),
    _("Synthesis"),
    _("Moonlight"),
    _("Hidden Power"),
    _("Cross Chop"),
    _("Twister"),
    _("Rain Dance"),
    _("Sunny Day"),
    _("Crunch"),
    _("Mirror Coat"),
    _("Psych Up"),
    _("Extremespeed"),
    _("Ancientpower"),
    _("Shadow Ball"),
    _("Future Sight"),
    _("Rock Smash"),
    _("Whirlpool"),
    _("Beat Up"),
    _("Fake Out"),
    _("Uproar"),
    _("Stockpile"),
    _("Spit Up"),
    _("Swallow"),
    _("Heat Wave"),
    _("Hail"),
    _("Torment"),
    _("Flatter"),
    _("Will-O-Wisp"),
    _("Memento"),
    _("Facade"),
    _("Focus Punch"),
    _("Smellingsalt"),
    _("Follow Me"),
    _("Nature Power"),
    _("Charge"),
    _("Taunt"),
    _("Helping Hand"),
    _("Trick"),
    _("Role Play"),
    _("Wish"),
    _("Assist"),
    _("Ingrain"),
    _("Superpower"),
    _("Magic Coat"),
    _("Recycle"),
    _("Revenge"),
    _("Brick Break"),
    _("Yawn"),
    _("Knock Off"),
    _("Endeavor"),
    _("Eruption"),
    _("Skill Swap"),
    _("Imprison"),
    _("Refresh"),
    _("Grudge"),
    _("Snatch"),
    _("Secret Power"),
    _("Dive"),
    _("Arm Thrust"),
    _("Camouflage"),
    _("Tail Glow"),
    _("Luster Purge"),
    _("Mist Ball"),
    _("Featherdance"),
    _("Teeter Dance"),
    _("Blaze Kick"),
    _("Mud Sport"),
    _("Ice Ball"),
    _("Needle Arm"),
    _("Slack Off"),
    _("Hyper Voice"),
    _("Poison Fang"),
    _("Crush Claw"),
    _("Blast Burn"),
    _("Hydro Cannon"),
    _("Meteor Mash"),
    _("Astonish"),
    _("Weather Ball"),
    _("Aromatherapy"),
    _("Fake Tears"),
    _("Air Cutter"),
    _("Overheat"),
    _("Odor Sleuth"),
    _("Rock Tomb"),
    _("Silver Wind"),
    _("Metal Sound"),
    _("Grasswhistle"),
    _("Tickle"),
    _("Cosmic Power"),
    _("Water Spout"),
    _("Signal Beam"),
    _("Shadow Punch"),
    _("Extrasensory"),
    _("Sky Uppercut"),
    _("Sand Tomb"),
    _("Sheer Cold"),
    _("Muddy Water"),
    _("Bullet Seed"),
    _("Aerial Ace"),
    _("Icicle Spear"),
    _("Iron Defense"),
    _("Block"),
    _("Howl"),
    _("Dragon Claw"),
    _("Frenzy Plant"),
    _("Bulk Up"),
    _("Bounce"),
    _("Mud Shot"),
    _("Poison Tail"),
    _("Covet"),
    _("Volt Tackle"),
    _("Magical Leaf"),
    _("Water Sport"),
    _("Calm Mind"),
    _("Leaf Blade"),
    _("Dragon Dance"),
    _("Rock Blast"),
    _("Shock Wave"),
    _("Water Pulse"),
    _("Doom Desire"),
    _("Psycho Boost"),
    _("Energy Ball"),
	_("Earth Power"),
};
