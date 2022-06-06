#include <graphics.h>

int main()
{
	initwindow(1000, 500);
	for (int i = 0; i < 1000; i++)
	{
		circle(200 + i, 300, 100);
		delay(3);
		cleardevice();
	}
	line(400, 300, 400, 200);
	line(400, 300, 400, 200);
	getch();
}
