# include<graphics.h>
int main()
{
	initwindow(1200,900);

//	setcolor(BLUE);

	setfillstyle(SOLID_FILL,RED);
	line(478,139,478,479);
	line(478,139,630,294);
	line(630,294,519,294);
	line(519,294,638,420);
	line(638,420,478,420);
	floodfill(512,258,15);

//line(314,228,442,100);
//line(442,100,576,228);
//line(576,228,314,228);
//
//setfillstyle(SOLID_FILL,RED);
//floodfill(450,160,15);


getch();
	
}
