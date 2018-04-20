//ゲームコントロールできるソース
#include"conlib.h"

#define STATE_TITLE 1
#define STATE_GAME 2
#define STATE_GAMEOVER 3
int time;

int stateTItle(char key) 
{
	time++;
	printxy(30, 10, "タイトル");
	if ((time % 10) < 5) 
	{
		printxy(30, 20, "スペースキーを押せ！");
	}
	if(key==' ')
	{
		time = 0;
		return STATE_GAME;
	
	}
	return STATE_TITLE;
}
int stateGame(char key) 
{
	time++;
	printxy(time % 60, 10, "ゲーム中だぜ");
	printxy(30, 20, "rキーでゲームオーバーだぜ");
	if (key == 'r') 
	{
		time = 0;
		return STATE_GAMEOVER;
	}

	return STATE_GAME;
}

int stateGameover(char key)
{
	time++;
	if((time % 10) < 5)
	{
		printxy(30, 10, "ゲームオーバー");
	}
	if ((key != 0) || (time > 20)) 
	{
		time = 0;
		return STATE_TITLE;
	}
	return STATE_GAMEOVER;
}

void main() 
{
	char key;
	int nowstate;
	nowstate = STATE_TITLE;
	init_lib();
	

	while (true)
	{
		cls();
		key = checkkey();
		switch (nowstate)
		{
		case STATE_TITLE:
			nowstate = stateTItle(key);
			break;
		case STATE_GAME:
			nowstate = stateGame(key);
			break;
		case STATE_GAMEOVER:
			nowstate = stateGameover(key);
			break;
		}
		wait();
	}
}