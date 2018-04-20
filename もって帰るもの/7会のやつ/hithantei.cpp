#include<math.h>

int hithantei(int x1, int y1, int x2, int y2, int distance) 
{
	return(abs(x1 - x2) < distance && (abs(y1 - y2)) < distance);

}