#include"conlib.h"
#include"global.h"
#include"game.h"

int intoTitle()
{
	frame = 0;
	return STATE_TITLE;
}

int stateTitle(char key) 
{
	frame++;
	printxy(20, 10, "岩男");
	if( (frame%10) < 5)
	{
		printxy(30, 20, "スペースキーでスタート");
	}
	if (key == ' ') 
	{
		return intoGame();
	}
	return STATE_TITLE;
}