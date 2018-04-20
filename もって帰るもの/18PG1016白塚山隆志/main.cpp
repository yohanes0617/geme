#include<stdlib.h>
#include<stdio.h>
#include"conlib.h"
#include"hoge.h"
#include"piyo.h"
#include"global.h"
#include"hithantei.h"
struct MIJI hoge;
struct MIJI gMijinkoes[MIJI_NUM];
struct MIJI bullet;
struct MIJI player;
void main()
{
	char nowkey = '0\n';
	init_lib();
	init_hoge();
	init_piyo();
	initBullet();
	while (hoge.state==HOGE_APPLER)
	{
		cls();
		nowkey = checkkey();
		movepiyo();
		movehoge(nowkey);
		moveBullet();
		wait();

	}
	printf("ゲームオーバー");
}