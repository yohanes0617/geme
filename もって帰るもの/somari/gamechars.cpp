#include"global.h"
//�������ݒ�
void initChars() 
{
	for(int i=0;i<GAMECHAR_NUM;i++)
	{
	gamechar[i].kind = KIND_NONE;
	}
}
//�󂫃L���������邩���ׂA�L������ID���Q�ƁA�Ԃ�
int findSpaceCjar()
{
	for (int i = 0; i < GAMECHAR_NUM; i++) 
	{
		switch (gamechar[i].kind)
		{
		case KIND_NONE:
			return i;
		}
	
	}
	return -1;
}