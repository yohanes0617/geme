//ランダムで大多数動くほう
#include"global.h"
#include<stdlib.h>
#include<stdio.h>
#include"conlib.h"

void init_piyo()
{
	for (int i = 0; i < MIJI_NUM; i++)
	{
		gMijinkoes[i].x = rand() % 80;
		gMijinkoes[i].y = rand() % 20;
		gMijinkoes[i].state = MIJI_APPLEAR;
	}
}
void moveapiyo(int index)//一体だけ動かす大域変数の特定のものだけを動かす
{
	if ((rand() % 3) == 0)
	{
		gMijinkoes[index].y -= rand() % 4;
	}
	else
	{
		gMijinkoes[index].y++;
	}
	gMijinkoes[index].x += (rand() % 3 - 1);
	
	printxy(gMijinkoes[index].x, gMijinkoes[index].y, "@");
}

void movepiyo()//それを全部動かす
{
	for (int i = 0; i < MIJI_NUM; i++)
	{
		if (gMijinkoes[i].state == MIJI_APPLEAR)
		{
			moveapiyo(i);
		}
	}
}