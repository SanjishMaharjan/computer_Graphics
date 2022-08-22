#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
	initwindow(1000,900);
	setcolor(BROWN);
	line(212,119,309,300);
	line(244,116,350,261);

	
	circle(100,100,50);
//	setfillstyle(HATCH_FILL,BLUE);
 ellipse(150,150,0,270,50,100);
//	floodfill(99,99,BLUE);
	getch();

	return 0;
}
