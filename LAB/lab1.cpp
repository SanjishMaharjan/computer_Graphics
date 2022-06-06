#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
	int gd,gm;
	initwindow(632,468);
	//setcolor(RED);
	line(2,2,100,100);
	//cout<<getmaxx()<<endl<<getmaxy();
	//setcolor(BLUE);
	circle(100,100,50);
	putpixel(20,20,YELLOW);
	rectangle(10,10,250,300);
//	setfillstyle(HATCH_FILL,BLUE);
 ellipse(150,150,0,270,50,100);
//	floodfill(99,99,BLUE);
	getch();
	
	return 0;
}
