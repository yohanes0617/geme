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
	if (time >= 10)//���R��������
	{
		map[player.y][player.x] = 0;
		if (map[player.y + 1][player.x] == 0)
		{
			player.y++;
		}
		else
		{
			map[player.y][player.x] = 2;//�Ō�̏ꏊ�̕`�悦�}�W������ł����̂��������Ȃ����B
										//init�Č������Ǎ��͎��̃u���b�N������`�悌
			player.x = 6;
			player.y = 0;
		}

		map[player.y][player.x] = 2;
		player.time = 0;
	}
	if (key == 's')//�u���b�N�̈ړ�����
	{
		player.time = 10;
	}
	if (key == 'a')//�u���b�N�̈ړ�����
	{
		map[player.y][player.x] = 0;
		if (map[player.y][player.x - 1] == 0) {
			player.x--;
		}
		map[player.y][player.x] = 1;
	}if (key == 'd')//�u���b�N�̈ړ�����
	{
		map[player.y][player.x] = 0;
		if (map[player.y][player.x + 1] == 0) {
			player.x++;
		}
		map[player.y][player.x] = 2;
	}
	
}