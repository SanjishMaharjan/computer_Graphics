#include<graphics.h>
void forwardmotion()
	{
	for(int i=0 ; i<500 ; i++)
	{

	ellipse(427+i,267,0,360,50,80);
	arc(490+i,311,210,108,60);
	line(445+i,194,894+i,194);	// First line
	line(474+i,281,897+i,281);	// Second line
	line(894+i,194,950+i,219);	// Further parts
	line(950+i,219,938+i,261);
	line(938+i,261,893+i,282);

//	setfillstyle(HATCH_FILL,BROWN);

//	floodfill(427+i,267,WHITE);

//	setfillstyle(HATCH_FILL,BROWN);

//	floodfill(490+i,340,WHITE);


	ellipse(1100,242,0,360,25,80);
	ellipse(1100,242,0,360,40,80);
	line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);line(1,1,1,1);
	delay(0.5);
	cleardevice();

	
	}
	}

void backwardmotion()
	{


	ellipse(427,267,0,360,50,80);
	arc(490,311,210,108,60);
	line(445,194,894,194);	// First line
	line(474,281,897,281);	// Second line
	line(894,194,950,219);	// Further parts
	line(950,219,938,261);
	line(938,261,893,282);
	ellipse(1100,242,0,360,25,80);
	ellipse(1100,242,0,360,40,80);
	line(953,230,966,235);
	line(954,255,964,280);
	line(971,245,983,256);
}
void ejaculate()
{
for(int i=0 ; i<400 ; i++)
{

	line(953,230+i,966,235+i);
	line(954,255+i,964,280+i);
	line(971,245+i,983,256+i);

	delay(20);
	cleardevice();
	
	ellipse(427,267,0,360,50,80);
	arc(490,311,210,108,60);
	line(445,194,894,194);	// First line
	line(474,281,897,281);	// Second line
	line(894,194,950,219);	// Further parts
	line(950,219,938,261);
	line(938,261,893,282);
	ellipse(1100,242,0,360,25,80);
	ellipse(1100,242,0,360,40,80);

}


	}

int main()

{
	initwindow(1200,900);
	for (int i=0 ; i<5 ; i++)
	{
	forwardmotion();
	i++;
	}
	
//	backwardmotion();
	ejaculate();


	

	getch();
	
}
