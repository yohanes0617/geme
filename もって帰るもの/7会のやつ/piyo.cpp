//ƒ‰ƒ“ƒ_ƒ€‚Å‘å‘½”“®‚­‚Ù‚¤
#include"global.h"
#include<stdlib.h>
#include<stdio.h>
#include"conlib.h"
#include"gamechars.h"
#define STATE_FDOWN  1
#define FRAME_TIMEOUT 2

#define state_down 0
#define state_rgiht 3
#define state_left 4

void init_piyo(int fream)
{
	int index = 0;
	index = findSpaceChar();
	
		if (index >= 0)
		{
			Gamechars[index].x = 40;
			Gamechars[index].y = 0;
			Gamechars[index].kind = KIND_MIJINKO;
			Gamechars[index].state = state_left;
			Gamechars[index].frame = 0;
		}
	
}
void init_feller(int index)
{
	
	index = findSpaceChar();
	if (index >= 0)
	{
		Gamechars[index].x = rand() % 80;
		Gamechars[index].y = 0;
		Gamechars[index].kind = KIND_FILLE;
		Gamechars[index].state = state_down;
		Gamechars[index].frame = 0;
	}
};

void movefeller(int index)
{
	Gamechars[index].y++;

		if (Gamechars[index].y > 30)
		{
			Gamechars[index].kind = KIND_NONE;
		}

	printxy(Gamechars[index].x, Gamechars[index].y, "1");
}
void movepiyo(int index)//‚±‚¢‚Â‚ªGALI‚Ì“®‚«
{
		Gamechars[index].frame++;
		switch (Gamechars[index].state)
		{
		
		case state_left:
			Gamechars[index].x--;
			Gamechars[index].y++;
			if (Gamechars[index].frame%FRAME_TIMEOUT == 0)
			{
				Gamechars[index].state = state_rgiht;
				Gamechars[index].frame = 0;
			}
			break;
		case state_rgiht:
			Gamechars[index].x++;
			Gamechars[index].y++;
			if (Gamechars[index].frame%FRAME_TIMEOUT == 0)
			{
				Gamechars[index].state = state_left;
				Gamechars[index].frame = 0;
			}
			break;
	
		}

		printxy(Gamechars[index].x, Gamechars[index].y, "@");
	
}



