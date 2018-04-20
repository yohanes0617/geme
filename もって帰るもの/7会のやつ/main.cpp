#include<stdlib.h>
#include<stdio.h>
#include"conlib.h"
#include"hoge.h"
#include"piyo.h"
#include"global.h"
#include"hithantei.h"
struct CHAR Gamechars[GAMECHAR_NUM];
 int gamestate;
void main()
{
	int frame = 0;
	char nowkey = '0\n';
	init_lib();
	init_hoge();
	gamestate = GAME_CONTINUE;
	while (gamestate!=GAME_END)
	{
		cls();
			frame++;
			if (frame < 11)
			{
				init_piyo(frame);
			}
			else if ((frame >= 101) && (frame <= 200))
			{
				if (frame % 2 == 0)
				{
					init_feller(frame);
				}
			}
			 else if (frame >= 230)
			 {
				 printf("ゲームクリア！");
				 printf("rキーで元に戻ります");
				 if (nowkey == 'r') { break; }
		
			 }
		
		nowkey = checkkey();
		for (int i = 0; i < GAMECHAR_NUM; i++) 
		{
			switch (Gamechars[i].kind)
			{
			case KIND_MIJIKI:
				movehoge(i, nowkey);
				break;
			case KIND_MIJINKO:
				movepiyo(i);
				break;
			case KIND_FILLE:
				movefeller(i);
				break;
			case KIND_BULLET:
				moveBullet(i);
				break;
			case 0:
				break;
			}
			
			}
		wait();
	}
	wait(); 
	}
	
