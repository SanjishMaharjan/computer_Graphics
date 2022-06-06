#include<iostream>
#include<graphics.h>
int main()
{
	initwindow(1000,1000);
	int x=100,y=100;
	while(1)
{
     cleardevice();
     circle(x,y,50);
     if(GetAsyncKeyState(VK_RIGHT))
          x+=10;
     else if(GetAsyncKeyState(VK_LEFT))
          x=10;
     else if(GetAsyncKeyState(VK_UP))
          y=10;
     else if(GetAsyncKeyState(VK_DOWN))
          y+=10;
	delay(10);

}
}
