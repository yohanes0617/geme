#pragma once
#include<stdio.h>
#include<stdlib.h>
//�z������܂��N�A�����A����A��ʂ̂���B��ʕ\���̂�B����ȏ�͒m���B
#define MAP_W 12
#define MAP_H 15
//���x�̔z��͂��I�u���b�N������[�I
#define T_BLW 4
#define T_BLH 4
//�����̃Q�[���R���g���[��
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
