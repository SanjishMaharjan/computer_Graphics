#include<graphics.h>

void batman()
{
	line(475,369,493,275);
	line(493,275,514,327);
	line(514,327,551,328);
	line(551,328,570,274);
	line(570,274,589,370);

}
int main()
{
	initwindow(1000,900);
	batman();
	getch();

}
