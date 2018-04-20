#pragma once
//ゲームコントロール
#define STATE_TITLE 1
#define STATE_GAME 2
#define STATE_GAMEOVER 3

//キャラ（プレイヤー）
#define PLAYER_IDLE 0
#define PLAYER_FORWARD 1
#define PLAYER_BACK 2
#define PLAYER_JUNM 3
//接地座標
#define PLAYER_GUROUND_Y 20

//キャラ数
#define GAMECHAR_NUM 100

#define KIND_NONE 0
#define KIND_PLAYER 1
#define KIND_ENEMY 2

struct Gamechar
{
	int kind;
	int x;
	int y;
	int vy;
	int state;
	int frame;
};

extern int frame;
extern struct Gamechar gamechar[GAMECHAR_NUM];
