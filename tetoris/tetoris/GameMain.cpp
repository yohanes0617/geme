#include"conlib.h"
#include"global.h"
#include"game.h"
int key;
int map[MAP_H][MAP_W] = {
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1 },
};
int Tetris[7][4][4] = {
{
{1,0,0,0},
{1,0,0,0 },
{1,0,0,0 },
{1,0,0,0 },

},
{
	{1,0,0,0},
	{1,0,0,0},
	{1,1,0,0},
	{0,0,0,0}
}
};
int mytet[T_BLH][T_BLW];


//落下中のブロック
struct PlayerBLOCK;
PlayerBLOCK player;
void main ()
{
	init_lib();
	initPlayer();//ここで描画！１だからね。
	
	while (key !='q')
	{
		
		
		
		
		key = checkkey();
		cls();
		
		
		MovePlayer();
		
		//mapの描画
		for (int y = 0; y < MAP_H; y++) 
		{
		for(int x=0;x<MAP_W;x++)
			{
			if(map[y][x]!=0)
				{
				printxy(x*2+27, y+6, "■");
				}
			
			}	
		
		}
		
		wait();
	}

}