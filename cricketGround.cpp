// A cricket ground
#include <graphics.h>

void ground()
{
	// Ground Outline
	circle(700, 350, 300);

	// Coloring Green
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(402, 350, 15);

	// 30 Yards Outline
	ellipse(700, 350, 0, 360, 150, 200);

	// Pitch Outer Line
	rectangle(675, 265, 725, 435);

	// Pitch Inner Line
	rectangle(690, 265, 710, 435);

	// Coloring Pitch Brown
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(695, 300, 15);

	// Upper Stump Line
	rectangle(690, 265, 710, 280);
	line(680, 280, 720, 280);

	// Lower Stump Line
	rectangle(690, 435, 710, 420);
	line(680, 420, 720, 420);

}

void fielders(int x, int y)
{
	setfillstyle(SOLID_FILL, WHITE);
	circle(x,y,10);
	floodfill(x, y, WHITE);
}
void fielders_in_field()
{
		// Set of all the 11 fielders
	fielders(694,250);  // Wiketkeeper
	fielders(420,300);
	fielders(589,400);
	fielders(670,240);  //slip
	fielders(530,120);
	fielders(570,580);
	fielders(810,300);
	fielders(820,390);
	fielders(815,590);
	fielders(840,100);
}
void bowler()
{
	for(int i=0 ; i<60; i++)
	{
	
		fielders(694,490-i);  //bowler
		delay(10);
	
	}
	

}

int main()
{
	initwindow(1600,1000);

	ground();
	fielders_in_field();
	bowler();
	


	// Hold Screen For A While
	getch();

	return 0;
}

