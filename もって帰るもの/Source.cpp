//�Q�[���R���g���[���ł���\�[�X
#include"conlib.h"

#define STATE_TITLE 1
#define STATE_GAME 2
#define STATE_GAMEOVER 3
int time;

int stateTItle(char key) 
{
	time++;
	printxy(30, 10, "�^�C�g��");
	if ((time % 10) < 5) 
	{
		printxy(30, 20, "�X�y�[�X�L�[�������I");
	}
	if(key==' ')
	{
		time = 0;
		return STATE_GAME;
	
	}
	return STATE_TITLE;
}
int stateGame(char key) 
{
	time++;
	printxy(time % 60, 10, "�Q�[��������");
	printxy(30, 20, "r�L�[�ŃQ�[���I�[�o�[����");
	if (key == 'r') 
	{
		time = 0;
		return STATE_GAMEOVER;
	}

	return STATE_GAME;
}

int stateGameover(char key)
{
	time++;
	if((time % 10) < 5)
	{
		printxy(30, 10, "�Q�[���I�[�o�[");
	}
	if ((key != 0) || (time > 20)) 
	{
		time = 0;
		return STATE_TITLE;
	}
	return STATE_GAMEOVER;
}

void main() 
{
	char key;
	int nowstate;
	nowstate = STATE_TITLE;
	init_lib();
	

	while (true)
	{
		cls();
		key = checkkey();
		switch (nowstate)
		{
		case STATE_TITLE:
			nowstate = stateTItle(key);
			break;
		case STATE_GAME:
			nowstate = stateGame(key);
			break;
		case STATE_GAMEOVER:
			nowstate = stateGameover(key);
			break;
		}
		wait();
	}
}