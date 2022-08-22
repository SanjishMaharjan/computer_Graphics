#include<graphics.h>
void colorme()
	{
		setcolor(YELLOW);
	}
void fly()
{
		for(int x=0 ; x<450 ; x++)
	{

	line(0,386,1100,386);


	line(150+2*x,370-x,190+2*x,370-x);
	line(230+2*x,370-x,320+2*x,370-x);
	line(360+2*x,370-x,400+2*x,370-x);
	line(400+2*x,370-x,400+2*x,350-x);
	line(400+2*x,350-x,340+2*x,330-x);
	line(340+2*x,330-x,300+2*x,300-x);
	line(300+2*x,300-x,210+2*x,300-x);
	line(210+2*x,300-x,180+2*x,330-x);
	line(180+2*x,330-x,150+2*x,340-x);
	line(150+2*x,340-x,150+2*x,370-x);


	circle(210+2*x, 370-x,17);
	colorme();
	circle(340+2*x, 370-x,17);
 	colorme();

	delay(10);
	cleardevice();
}
}
void runway()
{
	for(int x=0 ; x<100 ; x++)
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

	delay(10);
	cleardevice();
}
}
int main()
{
	initwindow(1000,1000);
	for(int i=0; i<4; i++)
	{
	runway();
	fly();
	}
	

	getch();

}



