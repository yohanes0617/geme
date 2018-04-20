#include"global.h"

void initChars() 
{
	for (int i = 0; i < GAMECHAR_NUM; i++) 
	{
		Gamechars[i].kind = KIND_NONE;
	}

}

int findSpaceChar() 
{
	for(int i=0;i<GAMECHAR_NUM;i++)
	{
		switch (Gamechars[i].kind)
		{
		case KIND_NONE:
			return i;
		}
	}
	return -1;
}