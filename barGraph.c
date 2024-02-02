// Program To draw a bar graph
#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT,gm;

	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	
	bar(150,150,190,350);
	bar(220,250,260,350);

      line(100,350,400,350);
	line(100,50,100,350);
	
	getch();
	closegraph();
	
	return 0;
}