#pragma once

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1024

#define SPLASH_STATE_SHOW_TIME 3
#define SPLASH_SCENE_BACKGROUND_FILEPATH "Resources/res/Splash Background.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "Resources/res/Main Menu Background.png"
#define GAME_BACKGROUND_FILEPATH "Resources/res/Main Menu Background.png"

#define MAIN_MENU_TITLE_PATH "Resources/res/Game Title.png"

#define MAIN_MENU_PLAY_BUTTON "Resources/res/Play Button.png"

#define MAIN_MENU_PLAY_BUTTON_OUTER "Resources/res/Play Button Outer.png"

#define PAUSE_BUTTON "Resource/res/Pause Button.png"

#define X_PIECE_FILEPATH "Resources/res/X.png"
#define O_PIECE_FILEPATH "Resources/res/O.png"
#define X_WINNING_PIECE_FILEPATH "Resources/res/X Win.png"
#define O_WINNING_PIECE_FILEPATH "Resources/res/O Win.png"

#define X_PIECE 8
#define O_PIECE 0
#define EMPTY_PIECE -1
#define PLAYER_PIECE X_PIECE
#define AI_PIECE O_PIECE

#define STATE_PLAYING 98
#define STATE_PAUSE 97
#define STATE_WON 96
#define STATE_LOSE 95
#define STATE_PLACING_PIECE 94
#define STATE_AI_PLAYING 93
#define STATE_DRAW 92