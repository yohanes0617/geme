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
	printxy(20, 10, "��j");
	if( (frame%10) < 5)
	{
		printxy(30, 20, "�X�y�[�X�L�[�ŃX�^�[�g");
	}
	if (key == ' ') 
	{
		return intoGame();
	}
	return STATE_TITLE;
}