#include"conlib.h"
#include"global.h"
#include"title.h"
#include"game.h"
#include"gameover.h"

struct Gamechar gamechar[GAMECHAR_NUM];
int frame;
void main()
{
	char key;
	int nowstate;

	nowstate = STATE_TITLE;
	frame = 0;
	init_lib();

	while (true)
	{
		cls();
		key = checkkey();
		switch (nowstate)
		{
		case STATE_TITLE:
				nowstate = stateTitle(key);
			break;
		case STATE_GAME:
			nowstate = sateGame(key);
			break;
		case STATE_GAMEOVER:
			nowstate = stateGameover(key);
			break;
		}
		wait();
	}
}