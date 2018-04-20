#include"conlib.h"
#include"global.h"
#include"title.h"
int intoGameover()
{
	frame = 0;
	return STATE_GAMEOVER;
}


int stateGameover(char key) 
{
	frame++;
	if ((frame % 10) < 5) 
	{
		printxy(30, 10, "ゲームオーバー");
	}
	if((key!=0)||(frame>20))
	{
		return intoTitle();
	}
	return STATE_GAMEOVER;
}