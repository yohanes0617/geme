#include"global.h"
//初期化設定
void initChars() 
{
	for(int i=0;i<GAMECHAR_NUM;i++)
	{
	gamechar[i].kind = KIND_NONE;
	}
}
//空きキャラがあるか調べつつ、キャラのIDを参照、返す
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