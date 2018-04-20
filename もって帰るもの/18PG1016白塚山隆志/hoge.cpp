//asdw‚Å“®‚­‚Ù‚¤
#include"global.h"
#include"conlib.h"
#include<stdio.h>
#include"hithantei.h"
//‚±‚±‚Í’e
void initBullet() 
{
	bullet.state = BULLET_STATE_NONE;
}
void moveBullet()
{
	if (bullet.state == BULLET_STATE_APPEAR)
	{
		printxy(bullet.x, bullet.y, "|");
		bullet.y--;
		if (bullet.y < 0)
		{
			bullet.state = BULLET_STATE_NONE;
		}
		else
		{
			for (int i = 0; i < MIJI_NUM; i++)
			{
				if (gMijinkoes[i].state == MIJI_APPLEAR)
				{
					if (hithantei(gMijinkoes[i].x, gMijinkoes[i].y, bullet.x, bullet.y, 3))
					{
						gMijinkoes[i].state = MIJI_NONE;
						bullet.state = BULLET_STATE_NONE;
						break;
					}
				}
			}
		}

	}
}



//‚±‚±‚ÍƒvƒŒƒCƒ„[
void init_hoge()
{
	hoge.y = 20;
	hoge.x = 20;
	hoge.state = HOGE_APPLER;
}
void movehoge(char key)
{
	if (key == 'a')
	{
		hoge.x = hoge.x - 1;
	}
	if (key == 'd')
	{
		hoge.x = hoge.x + 1;
	}
	if (key == 'w')
	{
		hoge.y = hoge.y - 1;
	}
	if (key == 's')
	{
		hoge.y = hoge.y + 1;

	}
	for (int i = 0; i < MIJI_NUM; i++)
	{
		if (gMijinkoes[i].state == MIJI_APPLEAR)
		{
			if (hithantei(gMijinkoes[i].x, gMijinkoes[i].y, hoge.x, hoge.y, 3))
			{
				hoge.state = HOGE_NONE;
				break;
			}
		}
	}
	//tama
	if (key == ' ')
	{
		if (bullet.state == BULLET_STATE_NONE)
		{
			
			bullet.state = BULLET_STATE_APPEAR;	
			bullet.x = hoge.x;
			bullet.y = hoge.y;
		}

	}
	if (hoge.state == HOGE_APPLER)
	{
		printxy(hoge.x, hoge.y, "@");
	}
}