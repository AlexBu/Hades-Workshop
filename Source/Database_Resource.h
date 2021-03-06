#ifndef _DATABASE_RESOURCE_H
#define _DATABASE_RESOURCE_H

#include "Database_Common.h"

struct SortedChoiceSteamItem {
	unsigned int id;
	wxString steamid;
	wxString label;
};

//-- Battle Scenes
static SortedChoiceSteamItem HADES_STRING_BATTLE_SCENE_NAME[] = {
	{ 0x0,	L"B065",	L"Alexandria Castle, Hidden passage's lower level" },
	{ 0x4,	L"B008",	L"Alexandria Castle, Hidden passage's stairs" },
	{ 0x5,	L"B009",	L"Alexandria Castle, Extraction altar" },
	{ 0x6,	L"B064",	L"Alexandria Castle, Dungeon" },
	{ 0x2,	L"B063",	L"Alexandria Castle, Courtyard" },
	{ 0x1,	L"B035",	L"Alexandria Castle, Entrance Hall" },
	{ 0xA5,	L"B173",	L"Alexandria Castle, Library" },
	{ 0x3,	L"B034",	L"Alexandria Castle, Hallway" },
	{ 0x7,	L"B066",	L"Alexandria Castle, Queen's Chamber" },
	{ 0x7F,	L"B006",	L"Alexandria, Square (Night)" },
	{ 0x7E,	L"B005",	L"Alexandria, Main Street (Night)" },
	{ 0xE,	L"B036",	L"Burmecia, Outside, Street" },
	{ 0xA,	L"B039",	L"Burmecia, Outside, Holy gate" },
	{ 0xD,	L"B037",	L"Burmecia, Outside, Uptown area" },
	{ 0xB,	L"B041",	L"Burmecia, Outside, Beatrix battle" },
	{ 0xF,	L"B038",	L"Burmecia, Inside, House" },
	{ 0xC,	L"B040",	L"Burmecia, Inside, Uptown area" },
	{ 0x12,	L"B022",	L"Cargo Ship, Deck" },
	{ 0xB0,	L"B176",	L"Chocobo's Air Garden" },
	{ 0x2E,	L"B050",	L"Cleyra's Trunk, Outside, Rise (Tempest)" },
	{ 0x28,	L"B054",	L"Cleyra's Trunk, Outside, Ladder (Tempest)" },
	{ 0x2B,	L"B059",	L"Cleyra's Trunk, Outside, Ladder (Clear sky)" },
	{ 0x2A,	L"B049",	L"Cleyra's Trunk, Inside, Sand-full room" },
	{ 0x2C,	L"B052",	L"Cleyra's Trunk, Inside, Sandfall" },
	{ 0x2D,	L"B051",	L"Cleyra's Trunk, Inside, Platform with less sand" },
	{ 0x29,	L"B053",	L"Cleyra's Trunk, Inside, Trunk forest" },
	{ 0x19,	L"B056",	L"Cleyra, Antlion battle" },
	{ 0x17,	L"B055",	L"Cleyra, Entrance" },
	{ 0x16,	L"B057",	L"Cleyra, Observation post" },
	{ 0x18,	L"B058",	L"Cleyra, Front of the Cathedral" },
	{ 0xAD,	L"B169",	L"Crystal World, Blue battlefied" },
	{ 0xAF,	L"B175",	L"Crystal World, Red battlefield" },
	{ 0xA1,	L"B170",	L"Crystal World, Deathguise battle" },
	{ 0xA2,	L"B171",	L"Crystal World, Crystal" },
	{ 0xA3,	L"B172",	L"Crystal World, Necron battle" },
	{ 0x8,	L"B010",	L"Dali, Landing ground" },
	{ 0x4B,	L"B046",	L"Dali, Underground, Path" },
	{ 0x4C,	L"B045",	L"Dali, Underground, Production area" },
	{ 0x11,	L"B047",	L"Dead Forest" },
	{ 0x88,	L"B092",	L"Desert Palace, Dock" },
	{ 0x8A,	L"B094",	L"Desert Palace, Fire chamber" },
	{ 0x89,	L"B093",	L"Desert Palace, Stairwell" },
	{ 0x8B,	L"B095",	L"Desert Palace, Library" },
	{ 0x86,	L"B096",	L"Desert Palace, Top level" },
	{ 0x87,	L"B091",	L"Desert Palace, Sanctum" },
	{ 0x91,	L"B100",	L"Earth Shrine" },
	{ 0x8C,	L"B043",	L"Esto Gaza, Entrance" },
	{ 0x8D,	L"B044",	L"Esto Gaza, Gulug's Gate" },
	{ 0x1A,	L"B013",	L"Evil Forest, Light clearing" },
	{ 0x1D,	L"B014",	L"Evil Forest, Dark way" },
	{ 0x1B,	L"B015",	L"Evil Forest, Plant Brain battle" },
	{ 0x1C,	L"B016",	L"Evil Forest, Dark clearing" },
	{ 0x20,	L"B068",	L"Fossil Roo, Booby-Trapped road" },
	{ 0x1F,	L"B067",	L"Fossil Roo, Upper level" },
	{ 0x21,	L"B070",	L"Fossil Roo, Stone platform" },
	{ 0x22,	L"B069",	L"Fossil Roo, Road accross water" },
	{ 0x23,	L"B072",	L"Fossil Roo, Path of dirt with few scaffolding" },
	{ 0x24,	L"B071",	L"Fossil Roo, Underground lake" },
	{ 0x27,	L"B060",	L"Gargan Roo, Hall" },
	{ 0x26,	L"B061",	L"Gargan Roo, Platform" },
	{ 0x25,	L"B062",	L"Gargan Roo, Gargan path" },
	{ 0x30,	L"B029",	L"Gizamaluke's Grotto, Hall" },
	{ 0x31,	L"B030",	L"Gizamaluke's Grotto, Gizamaluke" },
	{ 0x33,	L"B018",	L"Ice Cavern, Icicle fields" },
	{ 0x34,	L"B017",	L"Ice Cavern, First fields" },
	{ 0x35,	L"B020",	L"Ice Cavern, Road to waterfall" },
	{ 0x32,	L"B019",	L"Ice Cavern, Waterfall" },
	{ 0x3D,	L"B081",	L"Iifa Tree, Outside, Root" },
	{ 0x39,	L"B076",	L"Iifa Tree, Outside, Root with Mist" },
	{ 0x37,	L"B078",	L"Iifa Tree, Outside, Trunk" },
	{ 0x36,	L"B079",	L"Iifa Tree, Outside, Slippery root" },
	{ 0x3C,	L"B077",	L"Iifa Tree, Inside, Stone elevator" },
	{ 0x3B,	L"B080",	L"Iifa Tree, Inside, Root" },
	{ 0x3A,	L"B082",	L"Iifa Tree, Inside, Leaf elevator" },
	{ 0x38,	L"B083",	L"Iifa Tree, Inside, Soulcage" },
	{ 0x8F,	L"B106",	L"Ipsen's Castle, Hall" },
	{ 0x90,	L"B107",	L"Ipsen's Castle, Stairwell" },
	{ 0x8E,	L"B108",	L"Ipsen's Castle, Mirrors' room" },
	{ 0x3F,	L"B025",	L"Lindblum, Industrial District" },
	{ 0x40,	L"B023",	L"Lindblum, Business District" },
	{ 0x41,	L"B024",	L"Lindblum, Theater District" },
	{ 0x42,	L"B021",	L"Madain Sari, Eidolon wall" },
	{ 0xA0,	L"B007",	L"Memoria, Nova Dragon battle" },
	{ 0xA4,	L"B109",	L"Memoria, Entrance & Recollection" },
	{ 0x9D,	L"B110",	L"Memoria, Stairs of Time" },
	{ 0x9A,	L"B111",	L"Memoria, Outer Path" },
	{ 0x9C,	L"B112",	L"Memoria, Oblivion" },
	{ 0x9E,	L"B113",	L"Memoria, Recollection (Rainy)" },
	{ 0x98,	L"B114",	L"Memoria, Time Interval" },
	{ 0xA6,	L"B115",	L"Memoria, Ruins" },
	{ 0x9F,	L"B116",	L"Memoria, Familiar Past" },
	{ 0xA7,	L"B117",	L"Memoria, World Fusion" },
	{ 0xA9,	L"B118",	L"Memoria, Portal" },
	{ 0xA8,	L"B119",	L"Memoria, Birth" },
	{ 0xAC,	L"B168",	L"Memoria, Hades & To the Origin" },
	{ 0x99,	L"B120",	L"Memoria, Ocean" },
	{ 0xAA,	L"B165",	L"Memoria, Time Warp" },
	{ 0xAB,	L"B166",	L"Memoria, Gaia's Birth" },
	{ 0xAE,	L"B174",	L"Memoria, Stairs" },
	{ 0x9B,	L"B167",	L"Memoria, Gate to Space" },
	{ 0xB2,	L"B177",	L"Memoria, To the Origin" },
	{ 0x13,	L"B074",	L"Mountain Path, Opened ground" },
	{ 0x14,	L"B075",	L"Mountain Path, Bridge" },
	{ 0x15,	L"B073",	L"Mountain Path, Closed ground" },
	{ 0x81,	L"B087",	L"Mount Gulug, Rectangular room" },
	{ 0x82,	L"B088",	L"Mount Gulug, Ruined room with stairways" },
	{ 0x84,	L"B085",	L"Mount Gulug, Interior" },
	{ 0x85,	L"B086",	L"Mount Gulug, Room with a missing wall" },
	{ 0x83,	L"B089",	L"Mount Gulug, Well's bottom" },
	{ 0x2F,	L"B090",	L"Mount Gulug, Extraction circle" },
	{ 0x1E,	L"B027",	L"Oeilvert, Outside" },
	{ 0x7C,	L"B031",	L"Oeilvert, Hall" },
	{ 0x7D,	L"B032",	L"Oeilvert, Grand Hall" },
	{ 0x7B,	L"B033",	L"Oeilvert, Star display" },
	{ 0x97,	L"B042",	L"Oeilvert, Ark battle" },
	{ 0x80,	L"B101",	L"Pandemonium, Hall (Metallic gates)" },
	{ 0x93,	L"B102",	L"Pandemonium, Hall (Stone gates)" },
	{ 0x94,	L"B103",	L"Pandemonium, Elevator" },
	{ 0x95,	L"B104",	L"Pandemonium, Teleportation maze" },
	{ 0x92,	L"B105",	L"Pandemonium, Top of Pandemonium" },
	{ 0x43,	L"B084",	L"Pinnacle Rocks" },
	{ 0x47,	L"B001",	L"Prima Vista, Cargo room" },
	{ 0x9,	L"B012",	L"Prima Vista, Cargo room in ruins" },
	{ 0x48,	L"B002",	L"Prima Vista, Storage room" },
	{ 0x49,	L"B003",	L"Prima Vista, Stage (Evening)" },
	{ 0x46,	L"B004",	L"Prima Vista, Stage (Night)" },
	{ 0x3E,	L"B011",	L"Qu Marsh" },
	{ 0x44,	L"B026",	L"Summit Station, Out of the Cable Car" },
	{ 0x45,	L"B097",	L"Terra, Path" },
	{ 0x7A,	L"B098",	L"Terra, Bridge" },
	{ 0x96,	L"B099",	L"Terra, Tree" },
	{ 0x10,	L"B048",	L"Terra, Bran Bal's stairways" },
	{ 0x4A,	L"B028",	L"Treno, Battle arena" },
	{ 0x52,	L"B137",	L"World Map, Mist Continent, Beach" },
	{ 0x5D,	L"B128",	L"World Map, Mist Continent, Beach + Mist" },
	{ 0x53,	L"B133",	L"World Map, Mist Continent, Dirt" },
	{ 0x59,	L"B124",	L"World Map, Mist Continent, Dirt + Mist" },
	{ 0x4D,	L"B130",	L"World Map, Mist Continent, Grassland (Day)" },
	{ 0x5A,	L"B121",	L"World Map, Mist Continent, Grassland (Day) + Mist" },
	{ 0x54,	L"B132",	L"World Map, Mist Continent, Grassland (Evening)" },
	{ 0x57,	L"B123",	L"World Map, Mist Continent, Grassland (Evening) + Mist" },
	{ 0x55,	L"B131",	L"World Map, Mist Continent, Grassland (Night)" },
	{ 0x56,	L"B122",	L"World Map, Mist Continent, Grassland (Night) + Mist" },
	{ 0x4E,	L"B144",	L"World Map, Mist Continent, Mountain" },
	{ 0x50,	L"B125",	L"World Map, Mist Continent, Mountain + Mist" },
	{ 0x70,	L"B147",	L"World Map, Outer Continent, Beach" },
	{ 0x6E,	L"B155",	L"World Map, Outer Continent, Beach + Mist" },
	{ 0x72,	L"B146",	L"World Map, Outer Continent, Dirt" },
	{ 0x6D,	L"B153",	L"World Map, Outer Continent, Dirt + Mist" },
	{ 0x71,	L"B145",	L"World Map, Outer Continent, Grassland" },
	{ 0x6F,	L"B152",	L"World Map, Outer Continent, Grassland + Mist" },
	{ 0x68,	L"B150",	L"World Map, Forgotten Continent, Dirt (Day)" },
	{ 0x62,	L"B158",	L"World Map, Forgotten Continent, Dirt (Day) + Mist" },
	{ 0x69,	L"B134",	L"World Map, Forgotten Continent, Dirt (Evening)" },
	{ 0x63,	L"B159",	L"World Map, Forgotten Continent, Dirt (Evening) + Mist" },
	{ 0x6C,	L"B148",	L"World Map, Forgotten Continent, Grassland (Day)" },
	{ 0x6B,	L"B156",	L"World Map, Forgotten Continent, Grassland (Day) + Mist" },
	{ 0x66,	L"B149",	L"World Map, Forgotten Continent, Grassland (Evening)" },
	{ 0x60,	L"B157",	L"World Map, Forgotten Continent, Grassland (Evening) + Mist" },
	{ 0x6A,	L"B139",	L"World Map, Forgotten Continent, Mountain (Day)" },
	{ 0x64,	L"B160",	L"World Map, Forgotten Continent, Mountain (Day) + Mist" },
	{ 0x65,	L"B151",	L"World Map, Forgotten Continent, Mountain (Evening)" },
	{ 0x5F,	L"B161",	L"World Map, Forgotten Continent, Mountain (Evening) + Mist" },
	{ 0x74,	L"B143",	L"World Map, Lost Continent, Beach" },
	{ 0x73,	L"B164",	L"World Map, Lost Continent, Beach + Mist" },
	{ 0x75,	L"B140",	L"World Map, Lost Continent, Dirt" },
	{ 0x76,	L"B162",	L"World Map, Lost Continent, Dirt + Mist" },
	{ 0x78,	L"B141",	L"World Map, Lost Continent, Snow" },
	{ 0x77,	L"B163",	L"World Map, Lost Continent, Snow + Mist" },
	{ 0x51,	L"B136",	L"World Map, Green forest" },
	{ 0x4F,	L"B127",	L"World Map, Green forest + Mist" },
	{ 0x67,	L"B142",	L"World Map, Brown forest" },
	{ 0x61,	L"B154",	L"World Map, Black forest" },
	{ 0x58,	L"B138",	L"World Map, Sand desert" },
	{ 0x5B,	L"B129",	L"World Map, Sand desert + Mist" },
	{ 0x5E,	L"B135",	L"World Map, Marsh" },
	{ 0x5C,	L"B126",	L"World Map, Marsh + Mist" },
	{ 0xB1,	L"NOFUJII",	L"??? (Empty battlefield)" }
};

//-- World Maps
#define WORLD_BLOCK_VALID_AMOUNT 13
static SortedChoiceSteamItem HADES_STRING_WORLD_BLOCK_NAME[] = {
	{ 9000, L"EVT_WORLD_WORLD00", L"World Map: No Transport" },
	{ 9001, L"EVT_WORLD_WORLD01", L"World Map/Event: Cargo Ship" },
	{ 9002, L"EVT_WORLD_WORLD02", L"World Map: Dagger" },
	{ 9003, L"EVT_WORLD_WORLD03", L"World Map: Blue Narciss" },
	{ 9004, L"EVT_WORLD_WORLD04", L"World Map/Event: Hilda Garde 1" },
	{ 9005, L"EVT_WORLD_WORLD05", L"World Map: Hilda Garde 1" },
	{ 9006, L"EVT_WORLD_WORLD06", L"World Map/Event: Track Kuja" },
	{ 9007, L"EVT_WORLD_WORLD07", L"World Map: Hilda Garde 3" },
	{ 9008, L"EVT_WORLD_WORLD08", L"World Map: Invincible" },
	{ 9009, L"EVT_WORLD_WORLD09", L"World Map: ???" },
	{ 9010, L"EVT_WORLD_WORLD10", L"World Map: Flying Airships" },
	{ 9011, L"EVT_WORLD_WORLD11", L"World Map: Around Dali" },
	{ 9012, L"EVT_WORLD_WORLD12", L"World Map/Event: Chocobo Treasure" },
	{ 9100, L"EVT_WORLD_WORLDTS", L"14th World Map" },
	{ 9101, L"EVT_WORLD_WORLDSV", L"15th World Map" }
/*	{ 234, "EVT_WORLD_PAGE_1" },
	{ 598, "EVT_WORLD_WM_LND00" },
	{ 599, "EVT_WORLD_WM_TRE00" },
	{ 286, "EVT_WORLD_WORLD_LND00" },
	{ 287, "EVT_WORLD_WORLD_TRE00" }*/
};

//-- Music
static SortedChoiceItem HADES_STRING_MUSIC_NAME[] = {
	{ 60,	L"Ice Cavern" },
	{ 103,	L"Ipsen's Castle" },
	{ 108,	L"South Gate" },
	{ 110,	L"Mount Gulug" },
	{ 116,	L"Loss Of Me" },
	{ 125,	L"Protecting My Devotion" },
	{ 129,	L"Daguerreo" },
	{ 131,	L"Terra" },
	{ 133,	L"Lindblum Castle" },
	{ 136,	L"Wind Sound" },
	{ 144,	L"Esto Gaza" },
	{ 68,	L"Burmecia" },
	{ 82,	L"Black Mage Village" },
	{ 84,	L"Pandemonium" },
	{ 85,	L"Treno" },
	{ 86,	L"The Sneaky Frog" },
	{ 87,	L"Bran Bal" },
	{ 90,	L"Conde Petie" },
	{ 94,	L"Immoral Melody" },
	{ 96,	L"Kuja" }, // Desert Palace
	{ 74,	L"Lindblum" },
	{ 76,	L"Limited Time" },
	{ 78,	L"Vamo' Alla Flamenco" },
	{ 57,	L"Qu Marsh" },
	{ 2,	L"Amarant" },
	{ 3,	L"Dali" },
	{ 24,	L"Aloha De Chocobo" },
	{ 32,	L"Gizamaluke Grotto" },
	{ 35,	L"Boss Battle" },
	{ 36,	L"Oeilvert" },
	{ 48,	L"You're Not Alone" },
};

//-- Audio
static SortedChoiceItem HADES_STRING_AUDIO_NAME[] = {
	{ 0,	L"Music_Battle" },
	{ 1,	L"Music_UnforgettableSorrow" },
	{ 2,	L"Music_AmarantTheme" },
	{ 3,	L"Music_VillageOfDali" },
	{ 4,	L"Music_DangerInTheForest" },
	{ 5,	L"Music_Fanfare" },
	{ 6,	L"Music_GameOver" },
	{ 7,	L"Music_TheExtraction" },
	{ 9,	L"Music_ViviTheme" },
	{ 10,	L"Music_SteinerTheme" },
	
	{ 35,	L"Music_BossBattle" },
	{ 111,	L"Music_FestivalOfTheHunt" }
	
};

//-- Model
static wxString DATABASE_MODEL_TYPE[] = {
	L"untyped",
	L"accessory",
	L"main",
	L"enemy",
	L"NPC",
	L"sub",
	L"weapon",
};

static SortedChoiceItem HADES_STRING_MODEL_NAME[] = {
	{ 0,	L"Enemy_Deathguise" },
	{ 1,	L"Enemy_Ozma" },
	{ 3,	L"Terran_Elevator" },
	{ 4,	L"Silverdragon" },
	{ 5,	L"Enemy_Kuja" },
	{ 6,	L"Metallic_Ground" },
	{ 7,	L"Enemy_DummyA" },
	{ 8,	L"Vivi" },
	{ 9,	L"Enemy_TrickSparrow" },
	{ 10,	L"Grandma" },
	{ 11,	L"Man_BillyGoat" },
	{ 12,	L"Dali_GrandmaA" },
	{ 13,	L"Dali_GrandmaB" },
	{ 14,	L"Enemy_ZombieA" },
	{ 15,	L"Iifa_Elevator" },
	{ 16,	L"Palace_Library" },
	{ 17,	L"Dali_ManB" },
	{ 18,	L"FishmanA" },
	{ 19,	L"HippoWoman" },
	{ 20,	L"Alexandrian_SoldierA" },
	{ 21,	L"LibrarianA" },
	{ 22,	L"Ladder" },
	{ 23,	L"Theater_Ship_Miniature" },
	{ 24,	L"YoungWomanA" },
	{ 25,	L"NobleladyA" },
	{ 26,	L"YoungNoblemanA" },
	{ 27,	L"Child" },
	{ 28,	L"Enemy_Hornet" },
	{ 31,	L"MiniBurmecia" },
	{ 32,	L"Alexandrian_BoyA" },
	{ 33,	L"Shadow" },
	{ 34,	L"Alexandrian_BoyB" },
	{ 35,	L"MiniBrahne" },
	{ 36,	L"Enemy_SilverDragon" },
	{ 37,	L"Weapon_Hammer" },
	{ 38,	L"Enemy_Maliris" },
	{ 39,	L"Battle_Cinna" },
	{ 40,	L"GirlA" },
	{ 41,	L"World_Chest" },
	{ 42,	L"Battle_Blank" },
	{ 43,	L"Weapon_Fairy_Flute" },
	{ 44,	L"Weapon_Golem_Flute" },
	{ 45,	L"Battle_Marcus" },
	{ 46,	L"Enemy_GoblinMage" },
	{ 47,	L"Enemy_Mover" },
	{ 48,	L"Ruby" },
	{ 49,	L"Dali_ChildA" },
	{ 50,	L"Dali_ManA" },
	{ 51,	L"YoungWomanB" },
	{ 52,	L"Hippaul" },
	{ 53,	L"Black_MageA" },
	{ 54,	L"Black_MageB" },
	{ 55,	L"Dali_GirlA" },
	{ 56,	L"NobleladyB" },
	{ 57,	L"Enemy_Yan" },
	{ 58,	L"Enemy_Dendrobium" },
	{ 59,	L"Enemy_HedgehogPie" },
	{ 60,	L"Enemy_Python" },
	{ 61,	L"Alexandrian_GirlA" },
	{ 62,	L"GenomeC" },
	{ 63,	L"Pigeon" },
	{ 64,	L"Dali_Woman" },
	{ 65,	L"Treno_Auctioneer" },
	{ 66,	L"Burmecian_SoldierA" },
	{ 67,	L"Housemaid" },
	{ 68,	L"Lindblum_Pub_Barman" },
	{ 69,	L"Owl" },
	{ 70,	L"Lindblum_Officer" },
	{ 71,	L"Stationmaster" },
	{ 72,	L"Mary" },
	{ 73,	L"Sailor" },
	{ 74,	L"Erin" },
	{ 75,	L"ChestA" },
	{ 76,	L"Dagger_Bis" },
	{ 77,	L"Enemy_Anemone" },
	{ 78,	L"Enemy_WhaleZombie" },
	{ 79,	L"Enemy_GiganOctopus" },
	{ 80,	L"Enemy_Zemzelett" },
	{ 81,	L"Enemy_SandScorpion" },
	{ 82,	L"Enemy_Garuda" },
	{ 83,	L"Enemy_Gargoyle" },
	{ 84,	L"Enemy_BlazerBeetle" },
	{ 85,	L"Enemy_Lamia" },
	{ 86,	L"Enemy_Axolotl" },
	{ 87,	L"Enemy_Zuu" },
	{ 88,	L"Enemy_Serpion" },
	{ 89,	L"Enemy_Cerberus" },
	{ 90,	L"Enemy_Griffin" },
	{ 91,	L"Chest_TerranA" },
	{ 92,	L"Enemy_Gnoll" },
	{ 93,	L"Enemy_Catoblepas" },
	{ 94,	L"Enemy_RingLeader" },
	{ 95,	L"Enemy_Ochu" },
	{ 96,	L"Enemy_Malboro" },
	{ 97,	L"Enemy_AxeBeak" },
	{ 98,	L"Zidane" },
	{ 99,	L"YoungWomanC" },
	{ 100,	L"Chocobo_Blue" },
	{ 101,	L"ManC" },
	{ 102,	L"Ramuh" },
	{ 103,	L"Daguerreo_Weaponsmith" },
	{ 104,	L"ThugA" },
	{ 105,	L"Enemy_ZombieB" },
	{ 106,	L"Queen_Brahne" },
	{ 107,	L"Cinna" },
	{ 108,	L"Lindblum_ManA" },
	{ 109,	L"MarcusA" },
	{ 110,	L"YoungManA" },
	{ 111,	L"ManA" },
	{ 112,	L"Old_Woman" },
	{ 113,	L"Conductor" },
	{ 114,	L"OglopA" },
	{ 115,	L"Cat" },
	{ 116,	L"Gilgamesh" },
	{ 117,	L"GrandpaA" },
	{ 118,	L"Alexandrian_SoldierB" },
	{ 119,	L"Red_MageA" },
	{ 120,	L"Red_MageB" },
	{ 121,	L"Puck" },
	{ 122,	L"Ticketmaster" },
	{ 123,	L"Hippolady" },
	{ 124,	L"FishManB" },
	{ 125,	L"Enemy_BlackWaltz2" },
	{ 126,	L"Dante" },
	{ 127,	L"TrumpeterA" },
	{ 128,	L"OglopB" },
	{ 129,	L"Moogle_Female" },
	{ 130,	L"Cymbalist" },
	{ 131,	L"Drummer" },
	{ 132,	L"Violinist" },
	{ 133,	L"Moogle_Book" },
	{ 134,	L"Moogle_QuillA" },
	{ 135,	L"Enemy_Vice" },
	{ 136,	L"Enemy_Ladybug" },
	{ 137,	L"Enemy_GiganToadA" },
	{ 138,	L"Enemy_Sahagin" },
	{ 141,	L"Enemy_Abomination" },
	{ 142,	L"Enemy_Stroper" },
	{ 143,	L"Enemy_Myconid" },
	{ 144,	L"Enemy_FeatherCircle" },
	{ 145,	L"Enemy_Bandersnatch" },
	{ 146,	L"Enemy_LandWorm" },
	{ 147,	L"Enemy_Ash" },
	{ 148,	L"Enemy_Drakan" },
	{ 149,	L"Enemy_WraithBlue" },
	{ 150,	L"Enemy_Clipper" },
	{ 151,	L"Enemy_Fang" },
	{ 152,	L"Enemy_Goblin" },
	{ 153,	L"Enemy_SeekerBat" },
	{ 154,	L"Enemy_Flan" },
	{ 155,	L"Enemy_Bomb" },
	{ 156,	L"Enemy_Ghost" },
	{ 157,	L"Enemy_Wyerd" },
	{ 158,	L"Enemy_Mu" },
	{ 159,	L"Enemy_Ironite" },
	{ 160,	L"Enemy_CarrionWorm" },
	{ 161,	L"Enemy_Mandragora" },
	{ 162,	L"Enemy_Skeleton" },
	{ 163,	L"Enemy_Zaghnol" },
	{ 164,	L"Enemy_Torama" },
	{ 165,	L"Enemy_Dracozombie" },
	{ 166,	L"Enemy_Hecteyes" },
	{ 167,	L"Black_Waltz3" },
	{ 168,	L"Black_Waltz2" },
	{ 169,	L"Black_Waltz1" },
	{ 170,	L"Hilda" },
	{ 171,	L"Doctor_Tot" },
	{ 172,	L"Zorn" },
	{ 173,	L"Pub_Waitress" },
	{ 174,	L"Frog_Baby" },
	{ 175,	L"Frog_Female" },
	{ 176,	L"Frog_Male" },
	{ 177,	L"NoblemanA" },
	{ 178,	L"Frog_Tadpole" },
	{ 179,	L"Dali_Innkeeper" },
	{ 180,	L"Dali_ChildB" },
	{ 181,	L"Burmecian_SoldierB" },
	{ 182,	L"SouthGate_Soldier" },
	{ 183,	L"ManB" },
	{ 184,	L"Enemy_Tonberry" },
	{ 185,	L"Dagger" },
	{ 186,	L"Baku_Masked" },
	{ 187,	L"Scholar" },
	{ 188,	L"Lindblum_Aviator" },
	{ 189,	L"SouthGate_Worker" },
	{ 190,	L"Blank_Pluto_Knight" },
	{ 191,	L"Cid_Oglop" },
	{ 192,	L"Freya" },
	{ 193,	L"Dog" },
	{ 194,	L"Lindblum_OldAviator" },
	{ 195,	L"TrumpeterB" },
	{ 196,	L"Moogle_Child" },
	{ 197,	L"Lindblum_WorkerA" },
	{ 198,	L"Mog" },
	{ 199,	L"Artemicion" },
	{ 200,	L"Air_Cab" },
	{ 202,	L"Garnet_HoodedA" },
	{ 203,	L"Zidane_Pluto_Knight" },
	{ 204,	L"Beatrix" },
	{ 205,	L"Garnet_HoodedB" },
	{ 206,	L"Burmecian_Girl" },
	{ 207,	L"Black_Waltz3_Broken" },
	{ 208,	L"SouthGate_Worker" },
	{ 209,	L"Burmecian_King" },
	{ 210,	L"Lowell" },
	{ 211,	L"YoungNoblemanD" },
	{ 212,	L"Stiltzkin" },
	{ 213,	L"YoungNoblemanB" },
	{ 214,	L"Quan" },
	{ 215,	L"Quale" },
	{ 216,	L"Burmecian_Woman" },
	{ 217,	L"Lindblum_Soldier" },
	{ 218,	L"Lindblum_Elite_Soldier" },
	{ 219,	L"Minister_Artania" },
	{ 220,	L"Moogle_Male" },
	{ 221,	L"Enemy_Epitaph" },
	{ 222,	L"Ticket" },
	{ 223,	L"Glass" },
	{ 224,	L"Jump_Rope" },
	{ 225,	L"Tent" },
	{ 226,	L"Balloon_Red" },
	{ 227,	L"Purple_Bottle" },
	{ 228,	L"Sealed_Letter" },
	{ 229,	L"Airship_Blue" },
	{ 230,	L"Airship_Yellow" },
	{ 231,	L"Airship_RedAndWhite" },
	{ 232,	L"Madain_Sari_Boat" },
	{ 233,	L"Book" },
	{ 234,	L"Coffee_Cup" },
	{ 235,	L"Stew_Pot" },
	{ 236,	L"Cooked_Fish" },
	{ 237,	L"Stew_Plate" },
	{ 238,	L"Dali_Coffin" },
	{ 239,	L"Soldier_Helmet" },
	{ 240,	L"Dali_Barrel" },
	{ 241,	L"Barrel" },
	{ 242,	L"PrimaVista_Elevator" },
	{ 243,	L"Sword" },
	{ 244,	L"Enemy_Cactuar" },
	{ 245,	L"Zaghnol" },
	{ 246,	L"Bandersnatch" },
	{ 247,	L"Fang" },
	{ 248,	L"Mu" },
	{ 249,	L"Trick_Sparrow" },
	{ 250,	L"Ralvurahva" },
	{ 251,	L"Ralvuimago" },
	{ 252,	L"Armodullahan" },
	{ 253,	L"WomanA" },
	{ 254,	L"Griffin" },
	{ 255,	L"Fabryce" },
	{ 256,	L"Enemy_Behemoth" },
	{ 257,	L"WhiteMage_Cloak" },
	{ 258,	L"Moogle_LetterA" },
	{ 259,	L"Chocobo" },
	{ 260,	L"Boco" },
	{ 261,	L"Enemy_Veteran" },
	{ 262,	L"Dali_Cart" },
	{ 264,	L"Weapon_Hamelin" },
	{ 265,	L"Enemy_MagicVice" },
	{ 266,	L"Enemy_Mimic" },
	{ 267,	L"Kuja" },
	{ 268,	L"Conde_Priest" },
	{ 269,	L"Cleyran_Priest" },
	{ 270,	L"Cid_Human" },
	{ 272,	L"Cleyran_High_Priest" },
	{ 273,	L"Quina" },
	{ 274,	L"Thorn" },
	{ 275,	L"Bell" },
	{ 277,	L"Pickaxe" },
	{ 278,	L"Enemy_BlackWaltz3" },
	{ 279,	L"Fishing_Rod" },
	{ 281,	L"Battle_DaggerLongHairA" },
	{ 282,	L"Engineer" },
	{ 283,	L"Battle_DaggerLongHairB" },
	{ 284,	L"Battle_EikoA" },
	{ 285,	L"Battle_ZidaneA" },
	{ 286,	L"Battle_SteinerA" },
	{ 287,	L"Battle_DaggerShortHairA" },
	{ 288,	L"Battle_DaggerShortHairB" },
	{ 289,	L"Battle_Quina" },
	{ 290,	L"Battle_Freya" },
	{ 291,	L"Battle_EikoB" },
	{ 294,	L"Gargan_Car" },
	{ 295,	L"Enemy_Quina" },
	{ 296,	L"Enemy_SteinerB" },
	{ 297,	L"Enemy_Freya" },
	{ 298,	L"Enemy_SteinerA" },
	{ 299,	L"Enemy_Zenero" },
	{ 300,	L"Enemy_Thorn" },
	{ 301,	L"Enemy_Baku" },
	{ 302,	L"Enemy_Zorn" },
	{ 303,	L"Enemy_BlackMageB" },
	{ 304,	L"Enemy_BlackMageA" },
	{ 305,	L"Enemy_BlackMageC" },
	{ 306,	L"Gargant" },
	{ 307,	L"World_Moogle" },
	{ 308,	L"World_Chocobo" },
	{ 309,	L"World_Dagger" },
	{ 310,	L"World_Zidane" },
	{ 311,	L"World_Tent" },
	{ 312,	L"World_Hilda_Garde1" },
	{ 313,	L"World_Cargo_Ship" },
	{ 314,	L"World_AirshipA" },
	{ 315,	L"World_AirshipB" },
	{ 316,	L"World_AirshipC" },
	{ 317,	L"World_Invincible" },
	{ 318,	L"World_AirshipD" },
	{ 319,	L"World_AirshipE" },
	{ 320,	L"World_Hilda_Garde3" },
	{ 321,	L"World_Blue_Narciss" },
	{ 322,	L"Weapon_Angel_Flute" },
	{ 323,	L"Enemy_Nymph" },
	{ 324,	L"Enemy_Adamantoise" },
	{ 325,	L"Enemy_Amdusias" },
	{ 326,	L"Enemy_Troll" },
	{ 327,	L"Enemy_Ogre" },
	{ 328,	L"Enemy_Agares" },
	{ 329,	L"Enemy_Yeti" },
	{ 330,	L"Enemy_Dragonfly" },
	{ 331,	L"Enemy_VepalBlue" },
	{ 332,	L"Enemy_Jabberwock" },
	{ 333,	L"Enemy_Grenade" },
	{ 334,	L"Enemy_Armstrong" },
	{ 335,	L"Enemy_RagtimeMouse" },
	{ 336,	L"Enemy_Behemoth" },
	{ 337,	L"Enemy_Chimera" },
	{ 338,	L"Enemy_ShellDragon" },
	{ 339,	L"Enemy_SandGolem" },
	{ 340,	L"Enemy_WormHydra" },
	{ 341,	L"Enemy_Abadon" },
	{ 342,	L"Enemy_Stilva" },
	{ 343,	L"Enemy_IronMan" },
	{ 344,	L"Enemy_Armodullahan" },
	{ 345,	L"Enemy_PlantSpider" },
	{ 346,	L"Enemy_Sealion" },
	{ 347,	L"Enemy_PlantBrain" },
	{ 348,	L"Enemy_Ralvurahva" },
	{ 349,	L"Enemy_Gizamaluke" },
	{ 350,	L"Enemy_Antlion" },
	{ 351,	L"Enemy_Lich" },
	{ 352,	L"Enemy_Ralvuimago" },
	{ 353,	L"Enemy_Tantarian" },
	{ 354,	L"Enemy_ValiaPira" },
	{ 355,	L"Enemy_GrandDragon" },
	{ 356,	L"Enemy_True" },
	{ 357,	L"Enemy_False" },
	{ 358,	L"Battle_Beatrix" },
	{ 359,	L"Enemy_KingLeo" },
	{ 360,	L"Worker" },
	{ 362,	L"Enemy_Hilgigars" },
	{ 363,	L"Enemy_Soulcage" },
	{ 364,	L"Enemy_EarthGuardian" },
	{ 365,	L"Mill_Shovels" },
	{ 366,	L"Weapon_Broadsword" },
	{ 367,	L"Weapon_Ultima_Sword" },
	{ 368,	L"Lani" },
	{ 369,	L"Enemy_GimmeCat" },
	{ 370,	L"Enemy_Tiamat" },
	{ 371,	L"Enemy_Taharka" },
	{ 376,	L"GrandpaB" },
	{ 377,	L"Lani_Axe" },
	{ 378,	L"Enemy_Kraken" },
	{ 379,	L"Enemy_Grimlock" },
	{ 380,	L"Fratley" },
	{ 381,	L"Garnet_Child" },
	{ 382,	L"Garland" },
	{ 383,	L"Weapon_Ragnarok" },
	{ 384,	L"Weapon_Mythril_Sword" },
	{ 385,	L"Weapon_Iron_Sword" },
	{ 386,	L"Weapon_Diamond_Sword" },
	{ 387,	L"Weapon_Coral_Sword" },
	{ 388,	L"Weapon_Ice_Brand" },
	{ 389,	L"Weapon_Blood_Sword" },
	{ 390,	L"Weapon_Save_The_Queen" },
	{ 391,	L"Weapon_Rune_Blade" },
	{ 392,	L"Weapon_Flame_Saber" },
	{ 393,	L"LibraryA" }, // Precise
	{ 394,	L"LibraryB" }, // Precise
//	{ 395,	L"" }, // Special effect like a blue magic light
	{ 396,	L"Letter" },
//	{ 397,	L"" }, // Kind of ticket
	{ 398,	L"Enemy_FriendlyMu" },
	{ 399,	L"Enemy_WraithRed" },
	{ 400,	L"Enemy_FriendlyGhost" },
	{ 401,	L"Enemy_FriendlyFeatherCircle" },
	{ 402,	L"Enemy_FriendlyYeti" },
	{ 403,	L"Enemy_FriendlyYan" },
	{ 404,	L"Enemy_FriendlyGaruda" },
	{ 405,	L"Enemy_FriendlyLadybug" },
	{ 406,	L"Gargan_Plate" },
	{ 407,	L"Oeilvert_Elevator" },
	{ 408,	L"GarganRoo_Lever" },
	{ 409,	L"Camp_Fire" },
	{ 410,	L"Enemy_Lani" },
	{ 411,	L"Bowl" },
	{ 412,	L"ThugB" },
	{ 413,	L"Weapon_Dragon_Hair" },
	{ 414,	L"Daguerreo_ElevatorA" },
	{ 415,	L"Neptune_Statue" },
	{ 416,	L"Enemy_Meltigemini" },
	{ 417,	L"Queen_Stella" },
	{ 418,	L"GirlB" },
	{ 419,	L"Dagger_Queen" },
	{ 420,	L"Conde_ChildA" },
	{ 421,	L"Conde_FemaleA" },
	{ 422,	L"Conde_MaleA" },
	{ 423,	L"Frog_Gold" },
	{ 424,	L"Treno_Child" },
	{ 425,	L"Cid_Frog" },
	{ 426,	L"Treno_Guard" },
	{ 427,	L"Enemy_Beatrix" },
	{ 428,	L"Enemy_MaskedMan" },
	{ 429,	L"Enemy_BakuMaskRight" },
	{ 430,	L"Enemy_BakuMaskLeft" },
	{ 431,	L"Gaza_Priest" },
	{ 432,	L"Hooded_Mystery_Man" },
	{ 433,	L"Dagger_Weapon" },
	{ 434,	L"Earth_Mirror" },
	{ 435,	L"Ice_BlockA" },
	{ 436,	L"Lindblum_Truck" },
	{ 437,	L"Terran_Urn" },
	{ 438,	L"Ice_Shard" },
	{ 439,	L"Ice_BlockB" },
	{ 440,	L"Weapon_Dragon_Claws" },
	{ 441,	L"Weapon_Zorlin_Shape" },
	{ 442,	L"Antlion" },
	{ 443,	L"Eiko" },
	{ 444,	L"Battle_Amarant" },
	{ 445,	L"Enemy_Quale" },
	{ 446,	L"Enemy_Garland" },
	{ 447,	L"Cleyran_Maiden" },
	{ 450,	L"Enemy_BlackWaltz1" },
	{ 451,	L"Enemy_Crawler" },
	{ 452,	L"World_Chocobo_Garden" },
	{ 453,	L"Weapon_Multina_Racket" },
	{ 454,	L"Weapon_Air_Racket" },
	{ 455,	L"Weapon_Rune_Claws" },
	{ 456,	L"Weapon_Duel_Claws" },
	{ 457,	L"Weapon_Tiger_Racket" },
	{ 458,	L"Weapon_Priest_Racket" },
	{ 459,	L"Weapon_Mythril_Racket" },
	{ 460,	L"Weapon_Magic_Racket" },
	{ 461,	L"Weapon_Rod" },
	{ 462,	L"Weapon_Wizard_Rod" },
	{ 463,	L"Weapon_Asura_Rod" },
	{ 464,	L"Weapon_Whale_Whisker" },
	{ 465,	L"Weapon_Javelin" },
	{ 466,	L"Weapon_Heavy_Lance" },
	{ 467,	L"Weapon_Trident" },
	{ 468,	L"Weapon_Partisan" },
	{ 469,	L"Weapon_Holy_Lance" },
	{ 470,	L"Weapon_Obelisk" },
	{ 471,	L"Weapon_Cat_Claws" },
	{ 472,	L"Weapon_Scissor_Fang" },
	{ 473,	L"Weapon_Kaiser_Knuckles" },
	{ 474,	L"Weapon_Avenger" },
	{ 475,	L"Weapon_Mage_Masher" },
	{ 476,	L"Weapon_Dagger" },
	{ 477,	L"Weapon_Gladius" },
	{ 478,	L"Weapon_Mage_Staff" },
	{ 479,	L"Weapon_Octagon_Rod" },
	{ 480,	L"Weapon_Cypress_Pile" },
	{ 481,	L"Weapon_Oak_Staff" },
	{ 482,	L"Weapon_Mace_Of_Zeus" },
	{ 483,	L"Weapon_High_Mage_Staff" },
	{ 484,	L"Weapon_Fork" },
	{ 485,	L"Weapon_Gastro_Fork" },
	{ 486,	L"Weapon_Bistro_Fork" },
	{ 487,	L"Ipsen_Pot" },
	{ 488,	L"Canal_Boat" },
	{ 489,	L"Funeral_Flowers" },
	{ 490,	L"Gysahl_Greens_Bag" },
	{ 491,	L"Weapon_Mythril_Rod" },
	{ 492,	L"Weapon_Healing_Rod" },
	{ 493,	L"Weapon_Stardust_Rod" },
	{ 494,	L"Weapon_Lamia_Flute" },
	{ 495,	L"Weapon_Siren_Flute" },
	{ 496,	L"Weapon_Mythril_Spear" },
	{ 497,	L"Weapon_Ice_Lance" },
	{ 498,	L"Weapon_Poison_Knuckles" },
	{ 499,	L"Weapon_Tiger_Fangs" },
	{ 500,	L"Weapon_Mythril_Claws" },
	{ 501,	L"Weapon_Mythril_Dagger" },
	{ 502,	L"Weapon_Ice_Staff" },
	{ 503,	L"Weapon_Flame_Staff" },
	{ 504,	L"Weapon_Lightning_Staff" },
	{ 505,	L"Weapon_Silver_Fork" },
	{ 506,	L"Weapon_Mythril_Fork" },
	{ 507,	L"Weapon_Needle_Fork" },
	{ 508,	L"Cloak" },
	{ 509,	L"Amarant" },
	{ 512,	L"Enemy_Ark" },
	{ 514,	L"Weapon_Sargatanas" },
	{ 515,	L"Weapon_Angel_Bless" },
	{ 516,	L"Weapon_Rune_Tooth" },
	{ 517,	L"Weapon_Exploda" },
	{ 518,	L"Weapon_Ultima_Weapon" },
	{ 519,	L"Weapon_The_Tower" },
	{ 520,	L"Weapon_Masamune" },
	{ 521,	L"Weapon_The_Ogre" },
	{ 522,	L"Weapon_Butterfly_Sword" },
	{ 523,	L"FossileRoo_Axe" },
	{ 525,	L"Silver_Bell" },
	{ 526,	L"Steiner_holding_Dagger" },
	{ 527,	L"Weapon_Orichalcon" },
	{ 524,	L"Plant_Spider" },
	{ 528,	L"Gizamaluke" },
	{ 529,	L"Earth_Guardian" },
	{ 530,	L"Fire_Guardian" },
	{ 531,	L"Kuja_Trance" },
	{ 532,	L"Zidane_holding_Dagger" },
	{ 533,	L"Taharka" },
	{ 534,	L"Ramuh_Mighty" },
	{ 535,	L"Wind_Guardian" },
	{ 536,	L"Chocobo_Egg" },
	{ 537,	L"Gargan_Flower" },
	{ 538,	L"Chocobo_Egg" },
	{ 539,	L"Mikoto" },
	{ 540,	L"GenomeA" },
	{ 541,	L"GenomeB" },
	{ 542,	L"Fat_Chocobo" },
	{ 543,	L"NobleladyC" },
	{ 544,	L"LibrarianB" },
	{ 545,	L"Enemy_NovaDragon" },
	{ 546,	L"Enemy_CaveImp" },
	{ 547,	L"Drunk" },
	{ 548,	L"Enemy_FriendlyNymph" },
	{ 549,	L"Conde_ChildB" },
	{ 550,	L"Conde_FemaleB" },
	{ 551,	L"Conde_MaleB" },
	{ 553,	L"Enemy_FriendlyJabberwock" },
	{ 555,	L"Save_The_Queen" },
	{ 556,	L"Enemy_Mistodon" },
	{ 557,	L"Enemy_Garnet" },
	{ 558,	L"Enemy_Vivi" },
	{ 559,	L"ManD" },
	{ 564,	L"Conde_HighPriest" },
	{ 566,	L"Enemy_TranceKujaB" },
	{ 567,	L"Enemy_TranceKujaA" },
	{ 569,	L"Enemy_Zidane" },
	{ 570,	L"Enemy_Eiko" },
	{ 571,	L"Enemy_ViviB" },
	{ 572,	L"Enemy_Amarant" },
	{ 573,	L"Enemy_ScarletHair" },
	{ 574,	L"Mistodon" },
	{ 575,	L"Enemy_HedgehogPie" },
	{ 576,	L"Enemy_Hades" },
	{ 577,	L"Balloon_Blue" },
	{ 578,	L"Balloon_Yellow" },
	{ 579,	L"Balloon_Green" },
	{ 580,	L"Battle_TranceZidaneA" },
	{ 581,	L"Battle_TranceZidaneB" },
	{ 582,	L"Battle_TranceDaggerShortHairA" },
	{ 583,	L"Battle_TranceDaggerLongHairA" },
	{ 584,	L"Battle_TranceVivi" },
	{ 585,	L"Battle_TranceFreya" },
	{ 586,	L"PinnacleRocks_Stone" },
	{ 587,	L"Shrine_TrapWall" },
	{ 588,	L"FishA" },
	{ 589,	L"FishB" },
	{ 590,	L"FishC" },
	{ 591,	L"Enemy_Soldier" },
	{ 592,	L"Enemy_PlutoKnight" },
	{ 593,	L"Enemy_BlackWaltz3Broken" },
	{ 594,	L"Weapon_Excalibur_II" },
	{ 595,	L"Weapon_Excalibur" },
	{ 596,	L"Iifa_Leave" },
	{ 597,	L"YoungWomanD" },
	{ 598,	L"Crier_Owl" },
	{ 599,	L"EstoGaza_OldMan" },
	{ 600,	L"Lindblum_WorkerB" },
	{ 601,	L"Battle_TranceDaggerShortHairB" },
	{ 602,	L"Battle_TranceDaggerLongHairB" },
	{ 603,	L"SeriousMan" },
	{ 604,	L"Dali_GirlB" },
	{ 605,	L"Weapon_Kain_Lance" },
	{ 606,	L"Battle_TranceSteiner" },
	{ 607,	L"Battle_TranceQuina" },
	{ 608,	L"Battle_BlankAsPluto" },
	{ 609,	L"Wood_Staff" },
	{ 610,	L"Enemy_RedDragon" },
	{ 612,	L"YoungNoblemanC" },
	{ 613,	L"Chocobo_Red" },
	{ 614,	L"Chocobo_Navy" },
	{ 615,	L"Chocobo_Gold" },
	{ 616,	L"Red_Dragon" },
	{ 617,	L"Amduscias" },
	{ 618,	L"Enemy_KrakenCrystal" },
	{ 619,	L"Enemy_MalirisCrystal" },
	{ 620,	L"Enemy_LichCrystal" },
	{ 621,	L"Enemy_TiamatCrystal" },
	{ 622,	L"Daguerreo_ElevatorB" },
	{ 624,	L"Cat_Brown" },
	{ 625,	L"Palace_Scale" },
	{ 626,	L"Palace_WeightWood" },
	{ 627,	L"Plank" },
	{ 628,	L"WoodBeam" },
	{ 629,	L"Weapon_Defender" },
	{ 630,	L"Palace_WeightIron" },
	{ 631,	L"Palace_WeightStone" },
	{ 632,	L"Palace_WeightClay" },
	{ 633,	L"Water_Mirror" },
	{ 634,	L"Fire_Mirror" },
	{ 635,	L"Wind_Mirror" },
	{ 636,	L"IpsenCastle_Elevator" },
	{ 637,	L"Big_Eye" },
	{ 638,	L"Garnet_Stone" },
	{ 639,	L"Enemy_Blank" },
	{ 640,	L"Mythril_Spear" },
	{ 641,	L"Gulug_Stone" },
	{ 642,	L"Mog_Ribbon" },
	{ 643,	L"Boy" },
	{ 644,	L"Battle_TranceEikoA" },
	{ 645,	L"Battle_TranceEikoB" },
	{ 646,	L"WomanB" },
	{ 647,	L"GrandpaC" },
	{ 648,	L"Battle_TranceAmarant" },
	{ 655,	L"Battle_SteinerB" },
	{ 658,	L"Steiner_Bis" },
	{ 659,	L"BlankB" },
	{ 660,	L"MarcusB" },
	{ 661,	L"CinnaB" },
	{ 662,	L"ViviB" },
	{ 663,	L"Enemy_GiganToadB" },
	{ 664,	L"Enemy_Benero" },
	{ 665,	L"Zidane_Hooded" },
	{ 666,	L"Garnet_HoodedC" },
	{ 667,	L"Kuja_Burned" },
	{ 671,	L"Enemy_Dagger" },
	{ 672,	L"Enemy_Necron" },
	{ 673,	L"Enemy_DummyB" },
	{ 674,	L"YoungManB" },
	{ 675,	L"YoungWomanE" },
	{ 676,	L"Enemy_VepalRed" },
	{ 677,	L"Treno_Hippo" },
	{ 678,	L"Treno_HippoPal" },
	{ 679,	L"Moogle_QuillB" },
	{ 680,	L"Moogle_LetterB" },
	{ 681,	L"Broadsword" },
	{ 701,	L"ChestB" },
	{ 702,	L"Chest_TerranB" },
	{ 758,	L"Chest_TerranC" },
	{ 5414,	L"Battle_ZidaneB" },
	{ 5415,	L"Battle_Vivi" },
	{ 5458,	L"Enemy_Basilisk" },
	{ 5459,	L"Enemy_LizardMan" },
	{ 5460,	L"Enemy_CarveSpider" },
	{ 5461,	L"Enemy_PrisonCage" },
	{ 5464,	L"Baku" },
	{ 5467,	L"Blank" },
	{ 5468,	L"Black_MageD" },
	{ 5474,	L"Cook" },
	{ 5476,	L"OldNoblemanA" },
	{ 5478,	L"Lindblum_ManB" },
	{ 5488,	L"Pluto_KnightA" },
	{ 5489,	L"Steiner" },
	{ 5492,	L"Alexandrian_GirlB" },
	{ 5500,	L"Nero" },
	{ 5501,	L"King_Leo" },
	{ 5505,	L"Naked_KnightA" },
	{ 5509,	L"Kohel" },
	{ 5511,	L"Naked_KnightB" }
};

#endif
