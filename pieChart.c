#include <graphics.h>
#include <conio.h>

int main()
{
	int x,y gd = DETECT,gm;

	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	outtextxy(220,10,"PIE CHART");

	x = getmaxx() / 2;
	y = getmaxy() / 2;


	setfillstyle(SOLID_FILL , YELLOW);
	pieslice(x,y,0,60,120);

	setfillstyle(SOLID_FILL,RED);
	pieslice(x,y,60,160,120);

	setfillstyle(SOLID_FILL,GREEN);
	pieslice(x,y,160,220,120);


	setfillstyle(SOLID_FILL,BLUE);
	pieslice(x,y,220,360,120);


	getch();
	
      closegraph();
	return 0;
}