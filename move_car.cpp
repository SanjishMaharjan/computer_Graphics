#include<graphics.h>
void colorme()
	{
		setcolor(YELLOW);
	}
int main()
{
	initwindow(1000,1000);
	
	for(int x=0 ; x<1000 ; x++)
	{
	
	line(0,386,1100,386);
	

	line(50+x,370,90+x,370);
	line(130+x,370,220+x,370);
	line(260+x,370,300+x,370);
	line(300+x,370,300+x,350);
	line(300+x,350,240+x,330);
	line(240+x,330,200+x,300);
	line(200+x,300,110+x,300);
	line(110+x,300,80+x,330);
	line(80+x,330,50+x,340);
	line(50+x,340,50+x,370);
	
	
	circle(110+x, 370,17);
	colorme();
	circle(240+x, 370,17);
 	colorme();
 	
	delay(0.99);
	cleardevice();
}
	getch();
	
}
