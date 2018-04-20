

#define MIJI_NUM 10 
#define FRAME_NUM 50
#define GAMECHAR_NUM 100
//キャラステート
#define KIND_NONE 0
#define KIND_MIJIKI 1
#define KIND_MIJINKO 2
#define KIND_BULLET 3
#define KIND_FILLE 4

#define GAME_CONTINUE 0
#define GAME_END -1
struct CHAR
{	//伽羅の種別
	int kind;
	int x;
	int y;
	int state;
	int frame;
};

extern struct CHAR Gamechars[GAMECHAR_NUM];
extern int gamestate;
