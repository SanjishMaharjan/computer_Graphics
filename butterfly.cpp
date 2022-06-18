#include<iostream>
#include<graphics.h>
using namespace std;

void butterfly(int, int ,int);
int r , x ,y;
int main()
{
	initwindow(1000,900);

	butterfly(200,400,400);
	setcolor(BROWN);
	line(400,200,400,600);  // Middle Segment of Butterfly
	setcolor(BROWN);
	// Tenticles of Butterfly
	line(400,200,450,100);
	setcolor(BROWN);
	line(400,200,350,100);
	// Random patterns in Butterfly
	circle(100,100,25);
	circle(200,190,25);
	circle(150,500,25);
	circle(200,700,25);
	circle(600,675,25);
	circle(500,550,25);
	circle(550,200,25);
	circle(600,100,25);
	circle(300,400,25);
	circle(500,400,25);
	getch();
}

void butterfly(int r, int x , int y)
{
	int po, x1 ,y1,k=0;

	po = 1-r;
	x1=0;
	y1=r;

	while(x1<=y1)
	{


		if (po<0)
		{
			x1=x1+1;
			y1=y1+2;
			po=po+2*x1+3;
		}
		else
		{
			x1=x1+2;
			y1=y1-1;
			po=po+2*x1-2*y1+5;
		}
		putpixel(x+x1,y+y1,MAGENTA);
		putpixel(x+y1,y+x1,WHITE);
		putpixel(x+y1,y-x1,YELLOW);
		putpixel(x+x1,y-y1,GREEN);
		putpixel(x-x1,y+y1,CYAN);
		putpixel(x-x1,y-y1,YELLOW);
		putpixel(x-y1,y-x1,LIGHTCYAN);
		putpixel(x-y1,y+x1,CYAN);

    	delay(1);

	}
}
