#include"conlib.h"
#include"global.h"
int randam;
void initPlayer()
{
	
	
}

void MovePlayer()
{
	int time = 10;
		time++;
	if (time >= 10)//自由落下処理
	{
		map[player.y][player.x] = 0;
		if (map[player.y + 1][player.x] == 0)
		{
			player.y++;
		}
		else
		{
			map[player.y][player.x] = 2;//最後の場所の描画えマジかこれでいいのかすごいなおい。
										//init案件だけど今は次のブロックを入れる描画ｌ
			player.x = 6;
			player.y = 0;
		}

		map[player.y][player.x] = 2;
		player.time = 0;
	}
	if (key == 's')//ブロックの移動処理
	{
		player.time = 10;
	}
	if (key == 'a')//ブロックの移動処理
	{
		map[player.y][player.x] = 0;
		if (map[player.y][player.x - 1] == 0) {
			player.x--;
		}
		map[player.y][player.x] = 1;
	}if (key == 'd')//ブロックの移動処理
	{
		map[player.y][player.x] = 0;
		if (map[player.y][player.x + 1] == 0) {
			player.x++;
		}
		map[player.y][player.x] = 2;
	}
	
}