#ifndef _IDENTIFIERS_
#define _IDENTIFIERS_

enum KartId {
    STANDARD_KART_S = 0x00,
    STANDARD_KART_M = 0x01,
    STANDARD_KART_L = 0x02,
    BABY_BOOSTER = 0x03,
    CLASSIC_DRAGSTER = 0x04,
    OFFROADER = 0x05,
    MINI_BEAST = 0x06,
    WILD_WING = 0x07,
    FLAME_FLYER = 0x08,
    CHEEP_CHARGER = 0x09,
    SUPER_BLOOPER = 0x0A,
    PIRANHA_PROWLER = 0x0B,
    RALLY_ROMPER = 0x0C,
    ROYAL_RACER = 0x0D,
    JETSETTER = 0x0E,
    BLUE_FALCON = 0x0F,
    SPRINTER = 0x10,
    HONEYCOUPE = 0x11,
    STANDARD_BIKE_S = 0x12,
    STANDARD_BIKE_M = 0x13,
    STANDARD_BIKE_L = 0x14,
    BULLET_BIKE = 0x15,
    MACH_BIKE = 0x16,
    BOWSER_BIKE = 0x17,
    BIT_BIKE = 0x18,
    BON_BON = 0x19,
    WARIO_BIKE = 0x1A,
    QUACKER = 0x1B,
    RAPIDE = 0x1C,
    SHOOTING_STAR = 0x1D,
    MAGIKRUISER = 0x1E,
    NITROCYCLE = 0x1F,
    SPEAR = 0x20,
    JET_BUBBLE = 0x21,
    DOLPHIN_DASHER = 0x22,
    PHANTOM = 0x23
};

enum CharacterId {
    MARIO = 0x00,
    BABY_PEACH = 0x01,
    WALUIGI = 0x02,
    BOWSER = 0x03,
    BABY_DAISY = 0x04,
    DRY_BONES = 0x05,
    BABY_MARIO = 0x06,
    LUIGI = 0x07,
    TOAD = 0x08,
    DONKEY_KONG = 0x09,
    YOSHI = 0x0A,
    WARIO = 0x0B,
    BABY_LUIGI = 0x0C,
    TOADETTE = 0x0D,
    KOOPA_TROOPA = 0x0E,
    DAISY = 0x0F,
    PEACH = 0x10,
    BIRDO = 0x11,
    DIDDY_KONG = 0x12,
    KING_BOO = 0x13,
    BOWSER_JR = 0x14,
    DRY_BOWSER = 0x15,
    FUNKY_KONG = 0x16,
    ROSALINA = 0x17,
    MII_S_A_MALE = 0x18,
    MII_S_A_FEMALE = 0x19,
    MII_S_B_MALE = 0x1A,
    MII_S_B_FEMALE = 0x1B,
    MII_S_C_MALE = 0x1C,
    MII_S_C_FEMALE = 0x1D,
    MII_M_A_MALE = 0x1E,
    MII_M_A_FEMALE = 0x1F,
    MII_M_B_MALE = 0x20,
    MII_M_B_FEMALE = 0x21,
    MII_M_C_MALE = 0x22,
    MII_M_C_FEMALE = 0x23,
    MII_L_A_MALE = 0x24,
    MII_L_A_FEMALE = 0x25,
    MII_L_B_MALE = 0x26,
    MII_L_B_FEMALE = 0x27,
    MII_L_C_MALE = 0x28,
    MII_L_C_FEMALE = 0x29,
    MII_M = 0x2A,
    MII_S = 0x2B,
    MII_L = 0x2C,
    PEACH_BIKER = 0x2D,
    DAISY_BIKER = 0x2E,
    ROSALINA_BIKER = 0x2F,
    CHARACTER_NONE = -1
};


enum ItemObjId {
    OBJ_GREEN_SHELL = 0x0,
    OBJ_RED_SHELL = 0x1,
    OBJ_BANANA = 0x2,
    OBJ_FAKE_ITEM_BOX = 0x7,
    OBJ_MUSHROOM = 0x3,
    OBJ_BOBOMB = 0x9,
    OBJ_BLUE_SHELL = 0x5,
    OBJ_LIGHTNING = 0x6,
    OBJ_STAR = 0x4,
    OBJ_GOLDEN_MUSHROOM = 0xC,
    OBJ_MEGA_MUSHROOM = 0x8,
    OBJ_BLOOPER = 0xA,
    OBJ_POW_BLOCK = 0xB,
    OBJ_THUNDER_CLOUD = 0xE,
    OBJ_BULLET_BILL = 0xD
};

enum ItemId {
    GREEN_SHELL = 0x0,
    RED_SHELL = 0x1,
    BANANA = 0x2,
    FAKE_ITEM_BOX = 0x3,
    MUSHROOM = 0x4,
    TRIPLE_MUSHROOM = 0x5,
    BOBOMB = 0x6,
    BLUE_SHELL = 0x7,
    LIGHTNING = 0x8,
    STAR = 0x9,
    GOLDEN_MUSHROOM = 0xA,
    MEGA_MUSHROOM = 0xB,
    BLOOPER = 0xC,
    POW_BLOCK = 0xD,
    THUNDER_CLOUD = 0xE,
    BULLET_BILL = 0xF,
    TRIPLE_GREEN_SHELL = 0x10,
    TRIPLE_RED_SHELL = 0x11,
    TRIPLE_BANANA = 0x12,
    UNKNOWN_0x13 = 0x13,
    ITEM_NONE = 0x14
};


enum CourseId {
    COURSEID_NONE = -1,

    LUIGI_CIRCUIT = 0x08,
    MOO_MOO_MEADOWS = 0x01,
    MUSHROOM_GORGE = 0x02,
    TOADS_FACTORY = 0x04,

    MARIO_CIRCUIT = 0x00,
    COCONUT_MALL = 0x05,
    DK_SUMMIT = 0x06,
    WARIOS_GOLD_MINE = 0x07,

    DAISY_CIRCUIT = 0x09,
    KOOPA_CAPE = 0x0F,
    MAPLE_TREEWAY = 0x0B,
    GRUMBLE_VOLCANO = 0x03,

    DRY_DRY_RUINS = 0x0E,
    MOONVIEW_HIGHWAY = 0x0A,
    BOWSERS_CASTLE = 0x0C,
    RAINBOW_ROAD = 0x0D,

    GCN_PEACH_BEACH = 0x10,
    DS_YOSHI_FALLS = 0x14,
    SNES_GHOST_VALLEY_2 = 0x19,
    N64_MARIO_RACEWAY = 0x1A,

    N64_SHERBET_LAND = 0x1B,
    GBA_SHY_GUY_BEACH = 0x1F,
    DS_DELFINO_SQUARE = 0x17,
    GCN_WALUIGI_STADIUM = 0x12,

    DS_DESERT_HILLS = 0x15,
    GBA_BOWSER_CASTLE_3 = 0x1E,
    N64_DKS_JUNGLE_PARKWAY = 0x1D,
    GCN_MARIO_CIRCUIT = 0x11,

    SNES_MARIO_CIRCUIT_3 = 0x18,
    DS_PEACH_GARDENS = 0x16,
    GCN_DK_MOUNTAIN = 0x13,
    N64_BOWSERS_CASTLE = 0x1C,

    BLOCK_PLAZA = 0x21,
    DELFINO_PIER = 0x20,
    FUNKY_STADIUM = 0x23,
    CHAIN_CHOMP_WHEEL = 0x22,
    THWOMP_DESERT = 0x24,

    SNES_BATTLE_COURSE_4 = 0x27,
    GBA_BATTLE_COURSE_3 = 0x28,
    N64_SKYSCRAPER = 0x29,
    GCN_COOKIE_LAND = 0x25,
    DS_TWILIGHT_HOUSE = 0x26,

    GALAXY_COLOSSEUM = 0x36,
    SUNSET_LUIGI_CIRCUIT = 0x3A,

    WINNING_DEMO = 0x37,
    LOSING_DEMO = 0x38,
    DRAW_DEMO = 0x39,
    NO_TRACK_SELECTED = 0x43,
    RANDOM = 0xFF
};

enum SaveCourseId {
    SAVE_ID_LUIGI_CIRCUIT = 0x0,
    SAVE_ID_MOO_MOO_MEADOWS = 0x1,
    SAVE_ID_MUSHROOM_GORGE = 0x2,
    SAVE_ID_TOADS_FACTORY = 0x3,

    SAVE_ID_MARIO_CIRCUIT = 0x4,
    SAVE_ID_COCONUT_MALL = 0x5,
    SAVE_ID_DK_SUMMIT = 0x6,
    SAVE_ID_WARIOS_GOLD_MINE = 0x7,

    SAVE_ID_DAISY_CIRCUIT = 0x8,
    SAVE_ID_KOOPA_CAPE = 0x9,
    SAVE_ID_MAPLE_TREEWAY = 0xB,
    SAVE_ID_GRUMBLE_VOLCANO = 0xA,

    SAVE_ID_DRY_DRY_RUINS = 0xD,
    SAVE_ID_MOONVIEW_HIGHWAY = 0xC,
    SAVE_ID_BOWSERS_CASTLE = 0xE,
    SAVE_ID_RAINBOW_ROAD = 0xF,

    SAVE_ID_GCN_PEACH_BEACH = 0x18,
    SAVE_ID_DS_YOSHI_FALLS = 0x1C,
    SAVE_ID_SNES_GHOST_VALLEY_2 = 0x11,
    SAVE_ID_N64_MARIO_RACEWAY = 0x15,

    SAVE_ID_N64_SHERBET_LAND = 0x14,
    SAVE_ID_GBA_SHY_GUY_BEACH = 0x10,
    SAVE_ID_DS_DELFINO_SQUARE = 0x1F,
    SAVE_ID_GCN_WALUIGI_STADIUM = 0x1A,

    SAVE_ID_DS_DESERT_HILLS = 0x1D,
    SAVE_ID_GBA_BOWSER_CASTLE_3 = 0x13,
    SAVE_ID_N64_DKS_JUNGLE_PARKWAY = 0x16,
    SAVE_ID_GCN_MARIO_CIRCUIT = 0x19,

    SAVE_ID_SNES_MARIO_CIRCUIT_3 = 0x12,
    SAVE_ID_DS_PEACH_GARDENS = 0x1E,
    SAVE_ID_GCN_DK_MOUNTAIN = 0x1B,
    SAVE_ID_N64_BOWSERS_CASTLE = 0x17
};

enum PageId {
    PAGE_NONE = 0xFFFFFFFF,
    PAGE_EMPTY                          = 0x00,
    PAGE_ESRB_NOTICE                    = 0x01,
    PAGE_HZ60_SUGGESTION                = 0x02,
    PAGE_CORRUPT_SAVE_MGR               = 0x03, //DONE
    PAGE_CANT_SAVE                      = 0x04,
    PAGE_SYSTEM_MEMORY_CORRUPT          = 0x05,
    PAGE_MII_DATA_CORRUPT               = 0x06,
    PAGE_GPPAN_OVERLAY                  = 0x07,
    PAGE_VSPAN_OVERLAY                  = 0x08, //DONE
    PAGE_BATTLEPAN_OVERLAY              = 0x09,
    PAGE_MISSIONPAN_OVERLAY             = 0x0A,
    PAGE_TOURNAMENTPAN_OVERLAY          = 0x0B,
    PAGE_GP_INTERFACE                   = 0x0C,
    PAGE_TT_INTERFACE                   = 0x0D, //DONE
    PAGE_P1VS_INTERFACE                 = 0x0E, //DONE
    PAGE_P2VS_INTERFACE                 = 0x0F, //DONE
    PAGE_P3VS_INTERFACE                 = 0x10, //DONE
    PAGE_P4VS_INTERFACE                 = 0x11,
    PAGE_P1BATTLE_INTERFACE             = 0x12,
    PAGE_P2BATTLE_INTERFACE             = 0x13,
    PAGE_P3BATTLE_INTERFACE             = 0x14,
    PAGE_P4BATTLE_INTERFACE             = 0x15,
    PAGE_MISSION_TOURNAMENT_INTERFACE   = 0x16,
    PAGE_GP_PAUSE_MENU                  = 0x17,
    PAGE_VS_RACE_PAUSE_MENU             = 0x18,
    PAGE_TT_PAUSE_MENU                  = 0x19, //DONE
    PAGE_BATTLE_PAUSE_MENU              = 0x1A,
    PAGE_TOURNAMENT_PAUSE_MENU          = 0x1B,
    PAGE_GHOST_RACE_PAUSE_MENU          = 0x1C,
    PAGE_ABANDON_GHOST_RACE             = 0x1D,
    PAGE_QUIT_GHOST_RACE                = 0x1E,
    PAGE_GHOST_REPLAY_PAUSE_MENU        = 0x1F, //DONE
    PAGE_GP_ENDMENU                     = 0x20,
    PAGE_TT_ENDMENU                     = 0x21, //DONE
    PAGE_VS_RACEENDMENU                 = 0x22, //DONE
    PAGE_BATTLEENDMENU                  = 0x23,
    PAGE_BATTLE_ENDMENU                 = 0x24,
    PAGE_MISSION_ENDMENU                = 0x25,
    PAGE_TOURNAMENT_ENDMENU             = 0x26,
    PAGE_GHOST_RACE_ENDMENU             = 0x27,
    PAGE_GO_TO_FRIEND_ROSTER            = 0x28,
    PAGE_TT_FRIENDGHOST_END             = 0x29, //DONE
    PAGE_SEND_TOURNEY_RECORD            = 0x2A,
    PAGE_CHECK_RANKINGS                 = 0x2B, //DONE
    PAGE_2P_QUIT_CONFIRMATION           = 0x2C, //DONE
    PAGE_TT_SPLITS                      = 0x2D, //DONE
    PAGE_TT_LEADERBOARDS                = 0x2E, //DONE
    PAGE_GPVS_LEADERBOARD_UPDATE        = 0x2F, //DONE
    PAGE_GPVS_TOTAL_LEADERBOARDS        = 0x30, //DONE
    PAGE_ONLINERACE_LEADERBOARDS_UPDATE = 0x31,
    PAGE_TEAMVS_TOTAL_LEADERBOARDS      = 0x32,
    PAGE_BATTLE_LEADERBOARDS_UPDATE     = 0x33,
    PAGE_BATTLE_TOTAL_LEADERBOARDS      = 0x34,
    PAGE_COMPETITIONL_LEADERBOARD       = 0x35,
    PAGE_GP_REPLAY_INTERFACE            = 0x36,
    PAGE_GHOST_RACE_INTERFACE           = 0x37,
    PAGE_GP_REPLAY_PAUSE                = 0x38,
    PAGE_TT_IMMEDIATE_REPLAYPAUSE       = 0x39,
    PAGE_RESPAWN_FADE_IN_OUT            = 0x3A, //DONE
    PAGE_PROBABLY_AWARD_INTERFACE      = 0x3B,
    PAGE_PROBABLY_CONGRATS              = 0x3C,
    PAGE_CREDITS_VS_INTERFACE           = 0x3D,
    PAGE_ENDING                         = 0x3E, //DONE
    PAGE_CONGRATS_AFTER_CREDITS         = 0x3F,
    PAGE_WIFI_RACE_INTERFACE            = 0x40,
    PAGE_P2WIFI_RACE_INTERFACE          = 0x41,
    PAGE_WIFI_VS_INTERFACE              = 0x42, //DONE
    PAGE_WIFI_TEAMVS_INTERFACE         = 0x43,
    PAGE_WIFI_VS_RESULTS                = 0x44, //DONE
    PAGE_WWRACEEND_COUNTDOWN            = 0x45, //DONE
    PAGE_WWRACEEND_MENU                 = 0x46, //DONE
    PAGE_WWRACEEND_QUIT                 = 0x47, //DONE
    PAGE_WWRACEEND_WAIT                 = 0x48, //DONE
    PAGE_LIVEVS_VIEW_INTERFACE          = 0x49, //DONE
    PAGE_LIVEBATTLE_VIEW_INTERFACE     = 0x4A,
    PAGE_START_RACE                     = 0x4B, //DONE
    PAGE_AUTO_ENDING_TRANSPARENT        = 0x4C,
    PAGE_MESSAGE_BOX_TRANSPARENT        = 0x4D, //DONE
    PAGE_VOTERANDOM_MESSAGE_BOX         = 0x4E, //DONE
    PAGE_AUTO_ENDING                    = 0x4F, //DONE
    PAGE_AUTO_ENDING2                   = 0x50, //DONE
    PAGE_MESSAGEBOX                     = 0x51, //DONE
    PAGE_APPROVE                        = 0x52, //DONE
    PAGE_YESNO_FULL                     = 0x53, //DONE
    PAGE_BEHIND_MAIN_MENU               = 0x54,
    PAGE_BATTERY_MGR                    = 0x55, //DONE
    PAGE_LOW_BATTERY                    = 0x56, //DONE
    PAGE_TITLE                          = 0x57, //DONE
    PAGE_BLURRY_TITLE                   = 0x58, //DONE
    PAGE_OPENING_MOVIE                  = 0x59, //DONE
    PAGE_MAIN_MENU                      = 0x5A, //DONE
    PAGE_BEHIND_UNLOCKS                 = 0x5B,
    PAGE_FLAG_BACKGROUND                = 0x5C, //DONE
    PAGE_BEHIND_DISCONNECTSOPTIONS      = 0x5D,
    PAGE_TOP_MENU_OVERLAY               = 0x5E, //DONE
    PAGE_BLINKING_PRESS_A               = 0x5F,
    PAGE_MII_SELECT                     = 0x60, //DONE
    PAGE_ACTIVE_CONTROLLER_DISPLAY      = 0x61,
    PAGE_PLAYER_CONTROLLER_OPT_IN       = 0x62,
    PAGE_PAIR_WII_REMOTES               = 0x63,
    PAGE_PLAYER_CONTROLLER_COMPLETE     = 0x64,
    PAGE_LICENSE_SELECT                 = 0x65, //DONE
    PAGE_MII_CHANGED                    = 0x66, //DONE
    PAGE_LICENSE_SETTINGS               = 0x67, //DONE
    PAGE_ERASE_LICENSE                  = 0x68, //DONE
    PAGE_SINGLE_PLAYER_MENU             = 0x69, //DONE
    PAGE_GP_CLASS_SELECT                = 0x6A, //DONE
    PAGE_CHARACTER_SELECT               = 0x6B, //DONE
    PAGE_KART_SELECT                    = 0x6C, //DONE
    PAGE_DRIFT_SELECT                   = 0x6D, //DONE
    PAGE_CUP_SELECT                     = 0x6E, //DONE
    PAGE_COURSE_SELECT                  = 0x6F, //DONE
    PAGE_GHOST_SELECT_SUPPORTING        = 0x70, //DONE
    PAGE_GHOST_SELECT                   = 0x71, //DONE
    PAGE_VS_MODE_SELECT                 = 0x72, //DONE
    PAGE_VS_SETTINGS                    = 0x73, //DONE
    PAGE_VS_TEAMS_VIEW                  = 0x74, //DONE
    PAGE_BATTLE_MODE_SELECT             = 0x75, //DONE
    PAGE_BATTLE_KART_SELECT             = 0x76, //DONE
    PAGE_BATTLE_SETTINGS                = 0x77, //DONE
    PAGE_BATTLE_CUP_SELECT              = 0x78, //DONE
    PAGE_BATTLE_STAGE_SELECT            = 0x79, //DONE
    PAGE_MISSION_LEVEL_SELECT_UNUSED    = 0x7A,
    PAGE_MISSION_SELECT_SUB             = 0x7B,
    PAGE_MISSION_INFORMATION_PROMPT     = 0x7C,
    PAGE_DRIFT_SELECT_WITH_ONE_OPTION   = 0x7D,
    PAGE_MISSION_TUTORIAL               = 0x7E,
    PAGE_MODEL_RENDERER                 = 0x7F, //DONE
    PAGE_MULTIPLAYER_MENU               = 0x80, //DONE
    PAGE_MULTIPLAYER_KART_SELECT        = 0x81, //DONE
    PAGE_MULTIPLAYER_DRIFT_SELECT       = 0x82, //DONE
    PAGE_MULTIPLAYER_TEAM_SELECT        = 0x83, //DONE
    PAGE_WFC_CONNECT                    = 0x84, //DONE
    PAGE_WFC_DATA_STATEMENT             = 0x85, //DONE
    PAGE_WFC_DATA_ALLOW                 = 0x86, //DONE
    PAGE_WFC_DISCONNECT                 = 0x87, //DONE
    PAGE_DISCONNECT_MGR                 = 0x88, //DONE
    PAGE_DISCONNECT_ERROR               = 0x89, //DONE
    PAGE_APPROVE2P_WFC                  = 0x8A,
    PAGE_WFC_MAIN                       = 0x8B, //DONE
    PAGE_WFC_MODE_SELECT                = 0x8C, //DONE
    PAGE_WFC_FRIENDS_MENU               = 0x8D, //DONE
    PAGE_MKCHANNEL_FRIENDS_MENU         = 0x8E,
    PAGE_GLOBE_SEARCH                   = 0x8F, //DONE
    PAGE_COUNTDOWN                      = 0x90, //DONE
    PAGE_VR                             = 0x91, //DONE
    PAGE_VOTE                           = 0x92, //DONE
    PAGE_PRESENT_IN_LIVE_VIEW           = 0x93,
    PAGE_PREVENT_HOME_MENU_ONLINE_RACES = 0x94, //DONE
    PAGE_GLOBE                          = 0x95, //DONE
    PAGE_FRIEND_LIST                    = 0x96, //DONE
    PAGE_FRIEND_INFO                    = 0x97, //DONE
    PAGE_FRIEND_REMOVE                  = 0x98, //DONE
    PAGE_FRIEND_REMOVING                = 0x99, //DONE
    PAGE_PREPARE_THE_FRIENDS_LIST       = 0x9A,
    PAGE_FRIEND_ROOM_WAITING_TEXT       = 0x9B, //DONE
    PAGE_FRIEND_ROOM_MANAGER            = 0x9C, //DONE
    PAGE_FRIEND_ROOM                    = 0x9D, //DONE
    PAGE_FRIEND_ROOM_MESSAGES           = 0x9E, //DONE
    PAGE_MKCHANNEL                      = 0xA2,
    PAGE_RANKINGS_MENU                  = 0xA3,
    PAGE_CHANNEL_GHOSTS                 = 0xA4,
    PAGE_DUMMY_LOADS_0xA6               = 0xA5, //DONE
    PAGE_REGISTER_FRIEND                = 0xA6, //DONE
    PAGE_GHOST_MANAGER                  = 0xA7, //DONE
    PAGE_MKCHANNEL_GHOST_HISTOGRAM      = 0xA8,
    PAGE_MKCHANNEL_BEHIND_0xAD          = 0xAC,
    PAGE_MKCHANNEL_GHOST_CHALLENGEWATCH = 0xAD,
    PAGE_RESIDES_BEHIND_0x4F_LOADS_0xB4 = 0xB3,
    PAGE_MKCHANNEL_DLD_GHOST_LIST       = 0xB4,
    PAGE_MKCHANNEL_ERASE_GHOST          = 0xB5,
    PAGE_COMPETITION_FOR_WHEEL_ONLY     = 0xBA,
    PAGE_OPTIONS                        = 0xC0, //DONE
    PAGE_WIFI_OPTIONS                   = 0xC1, //DONE
    PAGE_OPTION_EXPLANATION             = 0xC2, //DONE
    PAGE_OPTIONS_2CHOICES               = 0xC3, //DONE
    PAGE_OPTIONS_3CHOICES               = 0xC4, //DONE
    PAGE_REGION_OPTIONS                 = 0xC5, //DONE
    PAGE_MASTER_OPTIONS                 = 0xC6, //DONE
    PAGE_LARGE_INFO_BOX_WITH_SPINNER    = 0xC7, //DONE
    PAGE_OPTIONS_MESSAGEBOX             = 0xC8, //DONE
    PAGE_INFO_BOX_WITH_OK_PROMPT        = 0xC9,
    PAGE_ADD_MKCHANNEL                  = 0xCA, //DONE
    PAGE_ADD_MKCHANNEL_PROMPT           = 0xCB, //DONE
    PAGE_DRAWS_BENEATH_SECTION_OPTIONS  = 0xCC,
    PAGE_OVERALL_RECORDS                = 0xCE,
    PAGE_FAVOURITES                     = 0xCF,
    PAGE_FRIEND_RECORDS                 = 0xD0,
    PAGE_WFC_RECORDS                    = 0xD1,
    PAGE_OTHER_RECORDS                  = 0xD2
};

enum SectionId {
    SECTION_NONE                        = 0xFFFFFFFF,
    SECTION_POWER_OFF_WII               = 0x0,
    SECTION_RETURN_TO_WIIMENU_1         = 0x4,
    SECTION_RETURN_TO_WIIMENU_2         = 0x5,
    SECTION_TEST_6                      = 0x6,
    SECTION_TEST_7                      = 0x7,
    SECTION_TEST_8                      = 0x8,
    SECTION_TEST_9                      = 0x9,
    SECTION_TEST_A                      = 0xa,
    SECTION_TEST_B                      = 0xb,
    SECTION_TEST_C                      = 0xc,
    SECTION_TEST_D                      = 0xd,
    SECTION_TEST_E                      = 0xe,
    SECTION_TEST_F                      = 0xf,
    SECTION_CREATE_NEW_SAVE             = 0x10,
    SECTION_CORRUPT_SAVE                = 0x11,
    SECTION_COUNTRY_CHANGED             = 0x12,
    SECTION_GAME_CANNOT_BE_SAVED        = 0x13,
    SECTION_CANNOT_ACCESS_SYSTEM_MEMORY = 0x14,
    SECTION_CANNOT_ACCESS_MII_DATA      = 0x15,
    SECTION_ESRB_NOTICE                 = 0x16,
    SECTION_RECOMMEND_60HZ_1            = 0x17,
    SECTION_RECOMMEND_60HZ_2            = 0x18,
    SECTION_GP_PANORAMA                 = 0x19,
    SECTION_VS_RACE_PANORAMA            = 0x1a, //DONE
    SECTION_BALLOON_BATTLE_PANORAMA     = 0x1b,
    SECTION_MISSION_BOSS_PANORAMA       = 0x1c,
    SECTION_COMPETITON_BOSS_PANORAMA    = 0x1d,
    SECTION_GP                          = 0x1e,
    SECTION_TT                          = 0x1f, //DONE
    SECTION_P1VS                        = 0x20, //DONE
    SECTION_P2VS                        = 0x21, //DONE
    SECTION_P3VS                        = 0x22,
    SECTION_P4VS                        = 0x23,
    SECTION_P1TEAM_VS                   = 0x24,
    SECTION_P2TEAM_VS                   = 0x25,
    SECTION_P3TEAM_VS                   = 0x26,
    SECTION_P4TEAM_VS                   = 0x27,
    SECTION_P1BATTLE                    = 0x28,
    SECTION_P2BATTLE                    = 0x29,
    SECTION_P3BATTLE                    = 0x2a,
    SECTION_P4BATTLE                    = 0x2b,
    SECTION_MISSION_MODE                = 0x2c,
    SECTION_TOURNAMENT                  = 0x2d,
    SECTION_GP_REPLAY                   = 0x2e,
    SECTION_TT_REPLAY                   = 0x2f,
    SECTION_GHOST_RACE_1                = 0x30,
    SECTION_GHOST_RACE_2                = 0x31,
    SECTION_WATCH_GHOST_FROM_CHANNEL    = 0x32,
    SECTION_WATCH_GHOST_FROM_DOWNLOADS  = 0x33,
    SECTION_WATCH_GHOST_FROM_MENU       = 0x34,
    SECTION_GP_AWARD                    = 0x35,
    SECTION_VS_RACE_AWARD               = 0x36,
    SECTION_AWARD_37                    = 0x37,
    SECTION_AWARD_38                    = 0x38,
    SECTION_ENDING_NORMAL_A             = 0x39, //DONE
    SECTION_ENDING_TRUE_A               = 0x3a, //DONE
    SECTION_ENDING_NORMAL_B             = 0x3b, //DONE
    SECTION_ENDING_TRUE_B               = 0x3c, //DONE
    SECTION_CONGRATULATIONS             = 0x3d,
    SECTION_CONGRATULATIONS_COMPLETE    = 0x3e,
    SECTION_MAIN_MENU_FROM_BOOT         = 0x3f,
    SECTION_MAIN_MENU_FROM_RESET        = 0x40,
    SECTION_MAIN_MENU_FROM_MENU         = 0x41,
    SECTION_MAIN_MENU_FROM_NEW_LICENSE  = 0x42,
    SECTION_MAIN_MENU_FROM_LICENSE      = 0x43,
    SECTION_DEMO                        = 0x44, //DONE
    SECTION_MII_SELECT_1                = 0x45,
    SECTION_MII_SELECT_2                = 0x46,
    SECTION_LICENSE_SETTINGS_MENU       = 0x47,
    SECTION_SINGLE_P_FROM_MENU          = 0x48, //DONE
    SECTION_SINGLE_P_TT_CHANGE_CHARA    = 0x49, //DONE
    SECTION_SINGLE_P_TT_CHANGE_COURSE   = 0x4a, //DONE
    SECTION_SINGLE_P_VS_NEXT_RACE       = 0x4b, //DONE
    SECTION_SINGLE_P_BT_NEXT_BATTLE     = 0x4c, //DONE
    SECTION_SINGLE_P_MR_CHOOSE_MISSION  = 0x4d, //DONE
    SECTION_SINGLE_P_CHAN_RACE_GHOST    = 0x4e, //DONE
    SECTION_SINGLE_P_LB_RACE_GHOST      = 0x4f, //DONE
    SECTION_SINGLE_P_LIST_RACE_GHOST    = 0x50, //DONE
    SECTION_SEND_GHOST_TO_FRIEND        = 0x51,
    SECTION_RACE_GHOST_FROM_CHAN_BOOT   = 0x52,
    SECTION_WATCH_REPLAY_FROM_CHAN_BOOT = 0x53,
    SECTION_LOCAL_MULTIPLAYER           = 0x54, //DONE
    SECTION_P1_WIFI                     = 0x55, //DONE
    SECTION_P1_WIFI_GLOBE_DISCONNECT    = 0x56, //DONE
    SECTION_P1_WIFI_FROM_FIND_FRIEND    = 0x57, //DONE
    SECTION_P1_WIFI_VS_VOTING           = 0x58, //DONE
    SECTION_P1_WIFI_BATTLE_VOTING       = 0x59, //DONE
    SECTION_P2_WIFI_SELECT_MII          = 0x5a, //DONE
    SECTION_P2_WIFI                     = 0x5b, //DONE
    SECTION_P2_WIFI_GLOBE_DISCONNECT    = 0x5c, //DONE
    SECTION_UNKNOWN_5D                  = 0x5d,
    SECTION_P2_WIFI_VS_VOTING           = 0x5e,
    SECTION_P2_WIFI_BATTLE_VOTING       = 0x5f,
    SECTION_P1_WIFI_FROOM_VS_VOTING     = 0x60,
    SECTION_P1_WIFI_FROOM_TEAMVS_VOTING = 0x61,
    SECTION_P1_WIFI_FROOM_BALLOON_VOTING= 0x62,
    SECTION_P1_WIFI_FROOM_COIN_VOTING   = 0x63,
    SECTION_P2_WIFI_FROOM_VS_VOTING     = 0x64,
    SECTION_P2_WIFI_FROOM_TEAMVS_VOTING = 0x65,
    SECTION_P2_WIFI_FROOM_BALLOON_VOTING= 0x66,
    SECTION_P2_WIFI_FROOM_COIN_VOTING   = 0x67,
    SECTION_P1_WIFI_VS                  = 0x68,
    SECTION_P2_WIFI_VS                  = 0x69,
    SECTION_P1_WIFI_VS_LIVEVIEW         = 0x6a,
    SECTION_P2_WIFI_VS_LIVEVIEW         = 0x6b,
    SECTION_P1_WIFI_BT                  = 0x6c,
    SECTION_P2_WIFI_BT                  = 0x6d,
    SECTION_P1_WIFI_BT_LIVEVIEW         = 0x6e,
    SECTION_P2_WIFI_BT_LIVEVIEW         = 0x6f,
    SECTION_P1_WIFI_FRIEND_VS           = 0x70,
    SECTION_P1_WIFI_FRIEND_TEAMVS       = 0x71,
    SECTION_P1_WIFI_FRIEND_BALLOON      = 0x72,
    SECTION_P1_WIFI_FRIEND_COIN         = 0x73,
    SECTION_P2_WIFI_FRIEND_VS           = 0x74,
    SECTION_P2_WIFI_FRIEND_TEAMVS       = 0x75,
    SECTION_P2_WIFI_FRIEND_BALLOON      = 0x76,
    SECTION_P2_WIFI_FRIEND_COIN         = 0x77,
    SECTION_WIFI_DISCONNECT_ERROR       = 0x78,
    SECTION_WIFI_DISCONNECT_GENERAL     = 0x79,
    SECTION_CHANNEL_FROM_MENU           = 0x7a,
    SECTION_CHANNEL_FROM_CHECK_RANKINGS = 0x7b,
    SECTION_CHANNEL_FROM_DOWNLOADS      = 0x7c,
    SECTION_TIME_TRIAL_LEADERBOARDS     = 0x7d,
    SECTION_TOURNAMENT_LEADERBOARDS     = 0x7e,
    SECTION_GHOST_RACE_WITH_DATA        = 0x7f,
    SECTION_GHOST_RACE_WITHOUT_DATA     = 0x80,
    SECTION_GHOST_RACE_NEXT_RACE        = 0x81,
    SECTION_DOWNLOADED_GHOST_DATA       = 0x82,
    SECTION_FRIENDS_LIST_1              = 0x83,
    SECTION_FRIENDS_LIST_2              = 0x84,
    SECTION_TOURNAMENT_2                = 0x85,
    SECTION_TOURNAMENT_CHANGE_CHARA     = 0x86,
    SECTION_TOURNAMENT_SUBMIT_RECORD    = 0x87,
    SECTION_TOURNAMENT_WHEEL_ONLY       = 0x88,
    SECTION_TOURNAMENT_WHEEL_ONLY_BOSSES= 0x89,
    SECTION_INVITE_FRIENDS_MSG_BOARD    = 0x8a,
    SECTION_DOWNLOAD_LATEST_DATA        = 0x8b,
    SECTION_OPTIONS                     = 0x8c,
    SECTION_INSTALL_CHANNEL             = 0x8d,
    SECTION_CHOOSE_REGION               = 0x8e,
    SECTION_JOIN_MESSAGE_SERVICE        = 0x8f,
    SECTION_MSG_UNLOCK_ORANGE1          = 0x90,
    SECTION_MSG_UNLOCK_ORANGE2          = 0x91,
    SECTION_MSG_UNLOCK_BLUE             = 0x92,
    SECTION_MSG_UNLOCK_YELLOW           = 0x93,
    SECTION_BROKEN_MISSION_MODE         = 0x94
};

enum BRSARGroups {
    BRSAR_GROUP_CONTROLS        = 1, //PushButton sounds for example
    BRSAR_GROUP_MK_CHANNEL      = 2,
    BRSAR_GROUP_WFC             = 3,
    BRSAR_GROUP_TITLE         = 5, //mostly the wave
    BRSAR_GROUP_CHANNEL         = 6,
    BRSAR_GROUP_OFFLINE_MENUS   = 7,

    BRSAR_GROUP_RACE = 0xE,

    //For tracks, simply add 0xF to its ID
    BRSAR_GROUP_LC      = 0x17,
    BRSAR_GROUP_MMM     = 0x10,
    BRSAR_GROUP_MG      = 0x11,
    BRSAR_GROUP_TF      = 0x13,
    BRSAR_GROUP_MC      = 0xF,
    BRSAR_GROUP_CM      = 0x14,
    BRSAR_GROUP_DKS     = 0x15,
    BRSAR_GROUP_WGM     = 0x16,
    BRSAR_GROUP_DC      = 0x18,
    BRSAR_GROUP_KC      = 0x1E,
    BRSAR_GROUP_MT      = 0x1A,
    BRSAR_GROUP_GV      = 0x12,
    BRSAR_GROUP_DDR     = 0x1D,
    BRSAR_GROUP_MH      = 0x19,
    BRSAR_GROUP_BC      = 0x1B,
    BRSAR_GROUP_RR      = 0x1C,
    BRSAR_GROUP_rPB     = 0x1F,
    BRSAR_GROUP_rYF     = 0x23,
    BRSAR_GROUP_rGV2    = 0x28,
    BRSAR_GROUP_rMR     = 0x29,
    BRSAR_GROUP_rSL     = 0x2A,
    BRSAR_GROUP_rSGB    = 0x2E,
    BRSAR_GROUP_rDS     = 0x26,
    BRSAR_GROUP_rWS     = 0x21,
    BRSAR_GROUP_rDH     = 0x24,
    BRSAR_GROUP_rBC3    = 0x2D,
    BRSAR_GROUP_rDKJP   = 0x2C,
    BRSAR_GROUP_rMC     = 0x20,
    BRSAR_GROUP_rMC3    = 0x27,
    BRSAR_GROUP_rPG     = 0x25,
    BRSAR_GROUP_rDKM    = 0x22,
    BRSAR_GROUP_rBC     = 0x2B,
    BRSAR_GROUP_aBP     = 0x30,
    BRSAR_GROUP_aDP     = 0x2F,
    BRSAR_GROUP_aFS     = 0x32,
    BRSAR_GROUP_aCCW    = 0x31,
    BRSAR_GROUP_aTD     = 0x33,
    BRSAR_GROUP_arBC4   = 0x36,
    BRSAR_GROUP_arBC3   = 0x37,
    BRSAR_GROUP_arS     = 0x38,
    BRSAR_GROUP_arCL    = 0x34,
    BRSAR_GROUP_arTH    = 0x35,

    //Add +2 for cannon
    BRSAR_GROUP_MARIO           = 0x46,
    BRSAR_GROUP_BABY_PEACH      = 0xE0,
    BRSAR_GROUP_WALUIGI         = 0x12F,
    BRSAR_GROUP_BOWSER          = 0x143,
    BRSAR_GROUP_BABY_DAISY      = 0xED,
    BRSAR_GROUP_DRY_BONES       = 0x119,
    BRSAR_GROUP_BABY_MARIO      = 0xBC,
    BRSAR_GROUP_LUIGI           = 0x56,
    BRSAR_GROUP_TOAD            = 0x109,
    BRSAR_GROUP_DONKEY_KONG     = 0x150,
    BRSAR_GROUP_YOSHI           = 0x6A,
    BRSAR_GROUP_WARIO           = 0x11B,
    BRSAR_GROUP_BABY_LUIGI      = 0xCE,
    BRSAR_GROUP_TOADETTE        = 0xFA,
    BRSAR_GROUP_KOOPA_TROOPA    = 0x11A,
    BRSAR_GROUP_DAISY           = 0x86,
    BRSAR_GROUP_PEACH           = 0x77,
    BRSAR_GROUP_BIRDO           = 0x93,
    BRSAR_GROUP_DIDDY_KONG      = 0xAF,
    BRSAR_GROUP_KING_BOO        = 0x15D,
    BRSAR_GROUP_BOWSER_JR       = 0xA0,
    BRSAR_GROUP_DRY_BOWSER      = 0x16B,
    BRSAR_GROUP_FUNKY_KONG      = 0x15E,
    BRSAR_GROUP_ROSALINA        = 0x178
};

enum SoundIDs {
    SOUND_ID_LC                             = 0x75,
    SOUND_ID_LC_F                           = 0x76,
    SOUND_ID_MMM                            = 0x77,
    SOUND_ID_MMM_F                          = 0x78,
    SOUND_ID_MG                             = 0x79,
    SOUND_ID_MG_F                           = 0x7A,
    SOUND_ID_TF                             = 0x7B,
    SOUND_ID_TF_F                           = 0x7C,

    SOUND_ID_MC                             = 0x7D,
    SOUND_ID_MC_F                           = 0x7E,
    SOUND_ID_CM                             = 0x7F,
    SOUND_ID_CM_F                           = 0x80,
    SOUND_ID_DKS                            = 0x81,
    SOUND_ID_DKS_F                          = 0x82,
    SOUND_ID_WGM                            = 0x83,
    SOUND_ID_WGM_F                          = 0x84,

    SOUND_ID_DC                             = 0x87,
    SOUND_ID_DC_F                           = 0x88,
    SOUND_ID_KC                             = 0x85,
    SOUND_ID_KC_F                           = 0x86,
    SOUND_ID_MT                             = 0x8F,
    SOUND_ID_MT_F                           = 0x90,
    SOUND_ID_GV                             = 0x8B,
    SOUND_ID_GV_F                           = 0x8C,

    SOUND_ID_DDR                            = 0x89,
    SOUND_ID_DDR_F                          = 0x8A,
    SOUND_ID_MH                             = 0x8D,
    SOUND_ID_MH_F                           = 0x8E,
    SOUND_ID_BC                             = 0x91,
    SOUND_ID_BC_F                           = 0x92,
    SOUND_ID_RR                             = 0x93,
    SOUND_ID_RR_F                           = 0x94,

    SOUND_ID_rPB                            = 0xA5,
    SOUND_ID_rPB_F                          = 0xA6,
    SOUND_ID_rYF                            = 0xAD,
    SOUND_ID_rYF_F                          = 0xAE,
    SOUND_ID_rMR                            = 0x9F,
    SOUND_ID_rMR_F                          = 0xA0,
    SOUND_ID_rGV2                           = 0x97,
    SOUND_ID_rGV2_F                         = 0x98,

    SOUND_ID_rSL                            = 0x9D,
    SOUND_ID_rSL_F                          = 0x9E,
    SOUND_ID_rSGB                           = 0x95,
    SOUND_ID_rSGB_F                         = 0x96,
    SOUND_ID_rDS                            = 0xAF,
    SOUND_ID_rDS_F                          = 0xB0,
    SOUND_ID_rWS                            = 0xA9,
    SOUND_ID_rWS_F                          = 0xAA,


    SOUND_ID_rDH                            = 0xB1,
    SOUND_ID_rDH_F                          = 0xB2,
    SOUND_ID_rBC3                           = 0x9B,
    SOUND_ID_rBC3_F                         = 0x9C,
    SOUND_ID_rDKJP                          = 0xA1,
    SOUND_ID_rDKJP_F                        = 0xA2,
    SOUND_ID_rMC                            = 0xA7,
    SOUND_ID_rMC_F                          = 0xA8,

    SOUND_ID_rMC3                           = 0x99,
    SOUND_ID_rMC3_F                         = 0x9A,
    SOUND_ID_rPG                            = 0xB3,
    SOUND_ID_rPG_F                          = 0xB4,
    SOUND_ID_rDKM                           = 0xAB,
    SOUND_ID_rDKM_F                         = 0xAC,
    SOUND_ID_rBC                            = 0xA3,
    SOUND_ID_rBC_F                          = 0xA4,

    SOUND_ID_aBP                            = 0xB7,
    SOUND_ID_aBP_F                          = 0xB8,
    SOUND_ID_aDP                            = 0xB5,
    SOUND_ID_aDP_F                          = 0xB6,
    SOUND_ID_aCCW                           = 0xBB,
    SOUND_ID_aCCW_F                         = 0xBC,
    SOUND_ID_aFS                            = 0xB9,
    SOUND_ID_aFS_F                          = 0xBA,
    SOUND_ID_aTD                            = 0xBD,
    SOUND_ID_aTD_F                          = 0xBE,

    SOUND_ID_arBC4                          = 0xC3,
    SOUND_ID_arBC4_F                        = 0xC4,
    SOUND_ID_arBC3                          = 0xC5,
    SOUND_ID_arBC3_F                        = 0xC6,
    SOUND_ID_arS                            = 0xC7,
    SOUND_ID_arS_F                          = 0xC8,
    SOUND_ID_arCL                           = 0xBF,
    SOUND_ID_arCL_F                         = 0xC0,
    SOUND_ID_arTF                           = 0xC1,
    SOUND_ID_arTF_F                         = 0xC2,

    SOUND_ID_GALAXY_COLOSSEUM               = 0xC9,

    SOUND_ID_RACE_INTRO                     = 0x56,
    SOUND_ID_WIFI_RACE_INTRO                = 0x5B,
    SOUND_ID_BATTLE_INTRO                   = 0x57,
    SOUND_ID_MISSION_INTRO                  = 0x58,
    SOUND_ID_ENDING_THEME_CREDITS           = 0xCE,
    SOUND_ID_BATTLE_RESULTS                 = 0x6E,
    SOUND_ID_1STPLACE_FINISH_RESULTS        = 0x5C,
    SOUND_ID_1STPLACE_FINISH_FANFARE        = 0x5D,
    SOUND_ID_GOOD_FINISH_RESULTS            = 0x5E,
    SOUND_ID_GOOD_FINISH_FANFARE            = 0x5F,
    SOUND_ID_BAD_FINISH_RESULTS             = 0x60,
    SOUND_ID_BAD_FINISH_FANFARE             = 0x61,
    SOUND_ID_MISSION_BOSS_WIN_FANFARE       = 0x6F,
    SOUND_ID_MISSION_LOSE_FANFARE           = 0x66,
    SOUND_ID_MISSION_LOSE_RESULTS           = 0x67,
    SOUND_ID_MISSION_WIN_RESULTS            = 0x64,
    SOUND_ID_MISSION_WIN_FANFARE            = 0x65,
    SOUND_ID_BATTLE_WIN_RESULTS             = 0x62,
    SOUND_ID_BATTLE_WIN_FANFARE             = 0x63,
    SOUND_ID_OPTIONS                        = 0x53,
    SOUND_ID_TT_INTRO_FANFARE               = 0x5A,
    SOUND_ID_RACE_INTRO_FANFARE             = 0x59,
    SOUND_ID_GHOST_REPLAY                   = 0xCF,
    SOUND_ID_TROPHY_SHORT                   = 0xCC,
    SOUND_ID_TROPHY_LOSE                    = 0xCD,
    SOUND_ID_TROPHY_NORMAL                  = 0xCB,
    SOUND_ID_TROPHY_MAIN                    = 0xCA,
    SOUND_ID_UNLOCKED                       = 0x73,

    SOUND_ID_STAR                           = 0x10e,
    SOUND_ID_MEGA                           = 0x112,
    SOUND_ID_GLOBAL_SHOCK                   = 0x114,
    SOUND_ID_GLOBAL_POW_1STSHAKE            = 0x11d,
    SOUND_ID_GLOBAL_POW_2NDSHAKE            = 0x11e,
    SOUND_ID_GLOBAL_POW_3RDSHAKE            = 0x11f,
    SOUND_ID_aDP_WATER                      = 0x309,
};

enum DamageType {
    SPINOUT_BANANA          = 0x0,
    SPINOUT_GOOMBA          = 0x1,
    KNOCKBACK_SHELL_FIB     = 0x2,
    KNOCKBACK_STAR          = 0x3,
    KNOCKBACK_CHOMP         = 0x4,
    KNOCKBACK_CAR           = 0x5,
    KNOCKBACK_BULLET        = 0x6,
    LAUNCH_EXPLOSION        = 0x7,
    LAUNCH_CATAQUACK        = 0x8,
    SPINOUT_FIRE            = 0x9,
    SPINOUT_SHOCK           = 0xa,
    POW                     = 0xb,
    SQUISH_THWOMP           = 0xc,
    SQUISH_MEGA             = 0xd,
    SQUISH_CAR              = 0xe,
    SPINOUT_ZAPPER          = 0xf,
    SQUISH_RESPAWN          = 0x10,
    SPINOUT_THUNDERCLOUD    = 0x11,
    NO_DAMAGE               = 0xffffffff
};

enum KCLTypes {
    KCL_ROAD                    = 0x0,
    KCL_SLIPPERY_ROAD           = 0x1,
    KCL_WEAK_OFFROAD            = 0x2,
    KCL_NORMAL_OFFROAD          = 0x3,
    KCL_HEAVY_OFFROAD           = 0x4,
    KCL_ICY_ROAD                = 0x5,
    KCL_BOOST_PANEL             = 0x6,
    KCL_BOOST_RAMP              = 0x7,
    KCL_JUMP_PAD                = 0x8,
    KCL_ITEM_ROAD               = 0x9,
    KCL_SOLID_FALL              = 0xA,
    KCL_MOVING_WATER            = 0xB,
    KCL_WALL                    = 0xC,
    KCL_INVISIBLE_WALL          = 0xD,
    KCL_ITEM_WALL               = 0xE,
    KCL_WALL_3                  = 0xF,
    KCL_FALL_BOUNDARY           = 0x10,
    KCL_CANNON_TRIGGER          = 0x11,
    KCL_FORCE_RECALCULATION     = 0x12,
    KCL_HALFPIPE                = 0x13,
    KCL_PLAYER_ONLY_WALL        = 0x14,
    KCL_MOVING_ROAD             = 0x15,
    KCL_STICKY_ROAD             = 0x16,
    KCL_ROAD2                   = 0x17,
    KCL_SOUND_TRIGGER           = 0x18,
    KCL_WEAK_WALL               = 0x19,
    KCL_EFFECT_TRIGGER          = 0x1A,
    KCL_ITEM_STATE              = 0x1B,
    KCL_HALFPIPE_INVIS_WALL = 0x1C,
    KCL_ROULETTE_MOVING_ROAD    = 0x1D,
    KCL_SPECIAL_WALL            = 0x1E,
    KCL_WALL5                   = 0x1F
};

enum KCLTypesBIT {
    KCL_BITFIELD_ROAD                   = 1 << KCL_ROAD,                  //0x1
    KCL_BITFIELD_SLIPPERY_ROAD          = 1 << KCL_SLIPPERY_ROAD,         //0x2
    KCL_BITFIELD_WEAK_OFFROAD           = 1 << KCL_WEAK_OFFROAD,          //0x4
    KCL_BITFIELD_NORMAL_OFFROAD         = 1 << KCL_NORMAL_OFFROAD,        //0x8
    KCL_BITFIELD_HEAVY_OFFROAD          = 1 << KCL_HEAVY_OFFROAD,         //0x10
    KCL_BITFIELD_ICY_ROAD               = 1 << KCL_ICY_ROAD,              //0x20
    KCL_BITFIELD_BOOST_PANEL            = 1 << KCL_BOOST_PANEL,           //0x40
    KCL_BITFIELD_BOOST_RAMP             = 1 << KCL_BOOST_RAMP,            //0x80
    KCL_BITFIELD_JUMP_PAD               = 1 << KCL_JUMP_PAD,              //0x100
    KCL_BITFIELD_ITEM_ROAD              = 1 << KCL_ITEM_ROAD,             //0x200
    KCL_BITFIELD_SOLID_FALL             = 1 << KCL_SOLID_FALL,            //0x400
    KCL_BITFIELD_MOVING_WATER           = 1 << KCL_MOVING_WATER,          //0x800
    KCL_BITFIELD_WALL                   = 1 << KCL_WALL,                  //0x1000
    KCL_BITFIELD_INVISIBLE_WALL         = 1 << KCL_INVISIBLE_WALL,        //0x2000
    KCL_BITFIELD_ITEM_WALL              = 1 << KCL_ITEM_WALL,             //0x4000
    KCL_BITFIELD_WALL_3                 = 1 << KCL_WALL_3,                //0x8000
    KCL_BITFIELD_FALL_BOUNDARY          = 1 << KCL_FALL_BOUNDARY,         //0x10000
    KCL_BITFIELD_CANNON_TRIGGER         = 1 << KCL_CANNON_TRIGGER,        //0x20000
    KCL_BITFIELD_FORCE_RECALCULATION    = 1 << KCL_FORCE_RECALCULATION,   //0x40000
    KCL_BITFIELD_HALFPIPE               = 1 << KCL_HALFPIPE,              //0x80000
    KCL_BITFIELD_PLAYER_ONLY_WALL       = 1 << KCL_PLAYER_ONLY_WALL,      //0x100000
    KCL_BITFIELD_MOVING_ROAD            = 1 << KCL_MOVING_ROAD,           //0x200000
    KCL_BITFIELD_STICKY_ROAD            = 1 << KCL_STICKY_ROAD,           //0x400000
    KCL_BITFIELD_ROAD2                  = 1 << KCL_ROAD2,                 //0x800000
    KCL_BITFIELD_SOUND_TRIGGER          = 1 << KCL_SOUND_TRIGGER,         //0x1000000
    KCL_BITFIELD_WEAK_WALL              = 1 << KCL_WEAK_WALL,             //0x2000000
    KCL_BITFIELD_EFFECT_TRIGGER         = 1 << KCL_EFFECT_TRIGGER,        //0x4000000
    KCL_BITFIELD_ITEM_STATE             = 1 << KCL_ITEM_STATE,            //0x8000000
    KCL_BITFIELD_HALFPIPE_INVIS_WALL    = 1 << KCL_HALFPIPE_INVIS_WALL,   //0x10000000
    KCL_BITFIELD_ROULETTE_MOVING_ROAD   = 1 << KCL_ROULETTE_MOVING_ROAD,  //0x20000000
    KCL_BITFIELD_SPECIAL_WALL           = 1 << KCL_SPECIAL_WALL,          //0x40000000
    KCL_BITFIELD_WALL5                  = 1 << KCL_WALL5                  //0x80000000
};
#endif