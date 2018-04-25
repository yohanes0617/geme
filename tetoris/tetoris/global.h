#pragma once
#include<stdio.h>
#include<stdlib.h>
//配列っつうまあ¨アレだ、うん、画面のやつだ。画面表示のやつ。それ以上は知らん。
#define MAP_W 12
#define MAP_H 15
//今度の配列はぁ！ブロックを作るよー！
#define T_BLW 4
#define T_BLH 4
//いつものゲームコントロール
extern enum GameContlor
{
	Title,
	GameMain,
	GameOver,
	Score,
	Escape
};
extern struct PlayerBLOCK
{
	int x, y;
	int time;
};
extern int map[MAP_H][MAP_W];
extern struct PlayerBLOCK player;
extern int key;
extern int Tetris[7][T_BLH][T_BLW];
extern int mytet[T_BLH][T_BLW];
