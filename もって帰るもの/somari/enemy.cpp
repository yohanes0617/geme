#include"conlib.h"
#include"global.h"
#include"gamechars.h"

void initplayer()
{
	int space = findSpaceCjar();
	gamechar[space].kind = KIND_ENEMY;
	/*gamechar[space].state = PLAYER_IDLE;*/
	gamechar[space].x = 40;
	gamechar[space].y = 20;
}
