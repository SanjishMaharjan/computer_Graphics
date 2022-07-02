// Program to draw a ellipse using Midpoint Ellipse drawing Algorithm
#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void ellipse(int xc,int yc,int a,int b)
{
    float p=b*b-a*a*b+a*a/4;
    float x=0, y=b;
    while(2*b*b*x <= 2*a*a*y)
    {
		if(p < 0)
		{
		   x++;
		   p = p+2*b*b*x+b*b;
		}
		else
		{
		   x++;
		   y--;
		   p = p+2*b*b*x-2*a*a*y-b*b;
		}
		    putpixel(xc+x,yc+y,RED);
		    putpixel(xc+x,yc-y,BLUE);
		    putpixel(xc-x,yc+y,YELLOW);
		    putpixel(xc-x,yc-y,GREEN);
		    delay(10);
     }


    p=b*b*(x+0.25)*(x+0.25)+a*a*(y-1)*(y-1)-a*a*b*b;
    while(y > 0)
    {
		if(p <= 0)
		{
		   x++;
		   y--;
		   p = p+2*b*b*x-2*a*a*y+a*a;
		}
		else
		{
		   y--;
		   p = p-2*a*a*y+a*a;
		}
		 putpixel(xc+x,yc+y,RED);
		 putpixel(xc+x,yc-y,BLUE);
		 putpixel(xc-x,yc+y,YELLOW);
		 putpixel(xc-x,yc-y,GREEN);
		 delay(10);

    }
}
int main()
{
    initwindow(1000,900);
	int xc,yc,rx,ry;
	cout<<"Enter the center of ellipse"<<endl;
	cin>>xc>>yc;
	cout<<"Enter the major and minor axes of ellipse"<<endl;
	cin>>rx>>ry;
    ellipse(xc,yc,rx,ry);
    closegraph();
    getch();
    return 0;
}
