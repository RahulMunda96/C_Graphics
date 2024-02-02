// Program to draw equilateral triangle
#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT,gm;

	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	line(150,150,450,150);

     line(150,150,300,300);
   
	line(450,150,300,300);

	getch();
	closegraph();
	return 0;
}
	