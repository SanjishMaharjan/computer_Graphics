#include <graphics.h>
#include <iostream>
using namespace std;
void firstman()
{
	// circle
	circle(130, 131, 30);
	// body
	line(130, 159, 130, 274);
	// legs
	line(130, 274, 93, 310);
	line(130, 274, 165, 308);
	// hands
	line(130, 191, 174, 191);
	line(130, 191, 176, 214);
	// gun
	line(176, 186, 257, 186);
	line(256, 185, 293, 199);
	line(176, 186, 177, 215);
	line(290, 199, 290, 216);
	line(177, 215, 290, 216);

	// stand
	line(222, 216, 222, 302);
	line(222, 216, 192, 265);
	line(222, 216, 264, 314);

	line(195, 213, 195, 231);
	line(195, 231, 207, 231);
	line(207, 231, 206, 214);
}

void secondman()
{
	// circle
	circle(884, 112, 30);
	// body
	line(884, 140, 884, 254);
	// legs
	line(884, 254, 856, 291);
	line(884, 254, 911, 294);
	// hands
	line(884, 170, 921, 140);
	line(884, 170, 840, 148);
	// gun
	line(799, 138, 799, 106);
	line(799, 106, 856, 106);
	line(910, 106, 934, 106);
	line(799, 138, 934, 139);
	line(934, 106, 934, 139);
	line(835, 159, 837, 140);
	line(835, 159, 850, 159);
	line(850, 159, 848, 139);
	// stand
	line(222, 216, 222, 302);
	line(222, 216, 192, 265);
	line(222, 216, 264, 314);
}
void bulletfirst()
{

	for (int i = 0; i < 500; i++)
	{
		// 	cleardevice();

		line(323 + i, 203, 347 + i, 203);
		line(408 + i, 204, 432 + i, 204);
		line(490 + i, 205, 500 + i, 205);
		line(593 + i, 206, 599 + i, 206);

		cout << endl;
		delay(1);

		firstman();
		secondman();
	}
	//	secondman();
}

void bulletsecond()
{
	firstman();
	for (int i = 0; i < 500; i++)
	{
		line(741 - i, 140, 741 - i, 111);
		line(702 - i, 138, 702 - i, 120);
		line(660 - i, 136, 660 - i, 127);
		line(630 - i, 134, 630 - i, 129);

		delay(1);
		//	cleardevice();
		secondman();
		firstman();
	}
}
int main()
{
	initwindow(1000, 1000);
	//	firstman();
	//	secondman();
	bulletfirst();
	bulletsecond();
	getch();
}
