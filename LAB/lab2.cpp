#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;

void DDA_Implement(float x1, float y1, float x2 , float y2)
{
	float k=0 ,dx ,dy ,steps ,xinc ,yinc ,x ,y ;
	dx=x2-x1;
	dy=y2-y1;

	if (fabs(dx)>fabs(dy))
	{
		steps=fabs(dx);
	}
	else
		{
			steps=fabs(dy);
		}
	 xinc = dx/steps;
	 yinc = dy/steps;

	 x=x1;
	 y=y1;

	 do
	 {
	 	putpixel(x,y,YELLOW);
	 	delay(10);
	 	x=x+xinc;
	 	y=y+yinc;
	 	k++;
	 }while(k<=steps);
}
int main()
{
	initwindow(1000,900);
	float x1, x2 ,y1 ,y2;
	cout<<"Enter the inital position of pixel "<<endl;
	cin>> x1 >>y1 ;
	cout<<"Enter the inital position of pixel "<<endl;
	cin>> x2 >>y2;
	DDA_Implement(x1, y1, x2, y2);
	getch();
	return 0;
}


