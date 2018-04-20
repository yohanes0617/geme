//asdw‚Å“®‚­‚Ù‚¤
#include"global.h"
#include"conlib.h"
#include<stdio.h>
#include"hithantei.h"
#include"gamechars.h"
//‚±‚±‚Í’e

void moveBullet(int index)
{
	Gamechars[index].y--;
	if (Gamechars[index].y < 0) 
	{
		Gamechars[index].kind = KIND_NONE;
	}
	else
	{
		printxy(Gamechars[index].x, Gamechars[index].y, "a");
		for (int i = 1; i < GAMECHAR_NUM; i++) 
		{
			switch (Gamechars[i].kind) 
			{
			case KIND_NONE:
			case KIND_BULLET:
			case KIND_MIJIKI:
				break;
			default:
				if (hithantei(Gamechars[index].x, Gamechars[index].y, Gamechars[i].x, Gamechars[i].y, 2))
				{
					Gamechars[i].kind = KIND_NONE;
					Gamechars[index].kind = KIND_NONE;
					return;
				}
				break;
			}
		}

		

	}
}



//‚±‚±‚ÍƒvƒŒƒCƒ„[
void init_hoge()
{
	int index;
	index = findSpaceChar();
	if (index >= 0) 
	{
		Gamechars[index].x = 20;
		Gamechars[index].y = 16;
		Gamechars[index].kind = KIND_MIJIKI;
	}
}
void movehoge(int index, char key)
{
	int newinde;
	
	if (key == 'a') {Gamechars[index].x -=1; }
	if (key == 'd') { Gamechars[index].x +=1; }
	if (key == 'w') { Gamechars[index].y -=1; }
	if (key == 's') { Gamechars[index].y +=1; }
	if (key == ' ')
	{
		newinde = findSpaceChar();
		Gamechars[newinde].kind = KIND_BULLET;
		Gamechars[newinde].x = Gamechars[index].x;
		Gamechars[newinde].y = Gamechars[index].y-1;
	}

	for (int i = 0; i < GAMECHAR_NUM; i++)
	{
		switch (Gamechars[i].kind)
		{
		case KIND_NONE:
		case KIND_BULLET:
		case KIND_MIJIKI:
			break;
		default:
			if (hithantei(Gamechars[index].x, Gamechars[index].y, Gamechars[i].x, Gamechars[i].y, 2))
			{
				gamestate = GAME_END;
				return;
			}break;
		}
	}
	printxy(Gamechars[index].x, Gamechars[index].y, "•Ä");
}
