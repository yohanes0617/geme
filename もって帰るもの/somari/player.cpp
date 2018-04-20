#include"conlib.h"
#include"global.h"
#include"gamechars.h"




void initplayer() 
{
	int space = findSpaceCjar();
	gamechar[space].kind = KIND_PLAYER;
	gamechar[space].state = PLAYER_IDLE;
	gamechar[space].x = 40;
	gamechar[space].y = 20;
}


int moveaplayer(char key, int index)
{
	if (key == 'w') 
	{
		gamechar[index].vy = -5;
		return PLAYER_JUNM;
	}
	if (key == 'a') 
	{
		return PLAYER_BACK;
	}
	if(key=='d')
	{
		return PLAYER_FORWARD;
	}
	return PLAYER_IDLE;
}

int playerstatejump(char key, int index) 
{
	gamechar[index].y += gamechar[index].vy;
	gamechar[index].vy++;
	if (gamechar[index].y >= 20) 
	{
		gamechar[index].y = 20;
		return PLAYER_IDLE;
	}
	return PLAYER_JUNM;
}

int playerstateforward(char key, int index)
{
	gamechar[index].x++;
	if (key != 'd')
	{
		return PLAYER_IDLE;
	}
	return PLAYER_FORWARD;
}
int playerstateback(char key, int index)
{
	gamechar[index].x--;
	if (key != 'a') 
	{
		return PLAYER_IDLE;
	}
	return PLAYER_BACK;
}

void moveplayer(char key, int index) 
{
	switch (gamechar[index].state)
	{
	case PLAYER_IDLE:
		gamechar[index].state = moveaplayer(key, index);
		break;
	case PLAYER_FORWARD:
		gamechar[index].state = playerstateforward(key, index);
		break;
	case PLAYER_BACK:
		gamechar[index].state = playerstateback(key, index);
		break;
	case PLAYER_JUNM:
		gamechar[index].state = playerstatejump(key, index);
		break;
	}
	
	printxy(gamechar[index].x, gamechar[index].y, "Šâ");

}