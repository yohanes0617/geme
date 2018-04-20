#include"conlib.h"
#include"global.h"
#include"gameover.h"
#include"gamechars.h"
#include"player.h"

int intoGame() 
{
	frame = 0;
	initChars();
	initplayer();
	return STATE_GAME;
}

int sateGame(char key)
{
	frame++;
	for (int i = 0; i < GAMECHAR_NUM; i++)//ここにエネミートかを増やしてく
	{
		switch (gamechar[i].kind)
		{
		case KIND_PLAYER:
			moveplayer(key, i);
			break;
		}
	}
	if (key == 'r')
	{
		return intoGameover();
	}
	return STATE_GAME;
}