#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
void translate(int *arr)
{
	int xt,yt;
	cout<<"Enter the coordinate to be translated:"<<endl;
	cin >> xt >> yt;
	for(int i=0 ; i<8 ; i++)
	{
		if(i%2==0)
		{
			arr[i]=arr[i]+xt;
			cout << arr[i]<<"\t";
		}
		else
		{
			arr[i]=arr[i]+yt;
			cout << arr[i]<<"\n";
		}
	}
		drawpoly(5,arr);
}
void scale(int *arr)
{
	int Sx,Sy;
	cout<<"Enter the coordinate to be scaled:"<<endl;
	cin >> Sx >> Sy;
	for(int i=0 ; i<8 ; i++)
	{
		if(i%2==0)
		{
			arr[i]=arr[i]*Sx;
			cout << arr[i]<<"\t";
		}
		else
		{
			arr[i]=arr[i]*Sy;
			cout << arr[i]<<"\n";
		}
	}
		drawpoly(5,arr);
}
void rotate(int *arr)
{
	int theta;
	cout<<"Enter the coordinate to be rotated:"<<endl;
	cin >> theta;
	for(int i=0 ; i<10 ; i++)
	{
		if(i%2==0)
		{
			arr[i]=abs(arr[i]*cos(theta)-arr[i+1]*sin(theta));
			cout << arr[i]<<"\t";
		}
		else
		{
			arr[i]=abs(arr[i-1]*sin(theta)-arr[i]*cos(theta));
			cout << arr[i]<<"\n";
		}
	}
		drawpoly(5,arr);
}
int main()
{
	initwindow(1000,900);
	int ch;
	int arr[]={300,200,300,400,600,400,600,200,300,200};
	drawpoly(5,arr);
	cout<<"Enter the operation you want to perform\n1 for translation\n2 for scaling\n3 for rotation"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			translate(arr);
			break;
  		case 2:
			scale(arr);
			break;
		case 3:
			rotate(arr);
			break;
	}
	getch();
	return 0;

}
