//ƒ‰ƒ“ƒ_ƒ€‚Å‘å‘½”“®‚­‚Ù‚¤
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
void moveapiyo(int index)//ˆê‘Ì‚¾‚¯“®‚©‚·‘åˆæ•Ï”‚Ì“Á’è‚Ì‚à‚Ì‚¾‚¯‚ğ“®‚©‚·
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

void movepiyo()//‚»‚ê‚ğ‘S•”“®‚©‚·
{
	for (int i = 0; i < MIJI_NUM; i++)
	{
		if (gMijinkoes[i].state == MIJI_APPLEAR)
		{
			moveapiyo(i);
		}
	}
}