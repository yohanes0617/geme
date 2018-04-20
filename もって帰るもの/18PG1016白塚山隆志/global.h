#define MIJI_NUM 10
#define BULLET_STATE_NONE 0
#define BULLET_STATE_APPEAR 1
#define MIJI_NONE 0
#define MIJI_APPLEAR 1
#define HOGE_NONE 0
#define HOGE_APPLER 1
struct MIJI
{
	int x;
	int y;
	int state;
};
extern struct MIJI hoge;
extern struct MIJI gMijinkoes[MIJI_NUM];
extern struct MIJI bullet;