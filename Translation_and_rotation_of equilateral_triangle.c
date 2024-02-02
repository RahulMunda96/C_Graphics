#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{

	int gd =DETECT,gm;
	int x1,y1,x2,y2,x3,y3,centerx,centery,sidelen,x1n,y1n,x2n,y2n,x3n,y3n;
	double angle;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	
	centerx = getmaxx()/2;
	centery  = getmaxy()/2;

	sidelen = 100;
	
	x1 = centerx;
	y1 = centery - sqrt(3)  *  sidelen /3;
	x2 = centerx - sidelen /2;
	y2 = centery + sqrt(3) * sidelen/ 6;
	x3 = centerx + sidelen /2;
	y3 = centery  + sqrt(3) * sidelen/6;


	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	getch();
	closegraph();

	angle = 45 *(M_PI /180);
	
	x1n = centerx + (x1 - centerx) * cos(angle) - (y1 - centery)  * sin(angle);
	y1n = centery + (x1 - centerx) * sin(angle) + (y1 - centery)  * cos(angle);

	x2n = centerx + (x2 - centerx) * cos(angle) - (y2 - centery)  * sin(angle);
	y2n = centery + (x2 - centerx) * sin(angle) + (y2 - centery)  * cos(angle);


	x3n = centerx + (x3 - centerx) * cos(angle) - (y3 - centery)  * sin(angle);
	y3n = centery + (x3 - centerx) * sin(angle) + (y3 - centery)  * cos(angle);

	
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	line(x1n,y1n,x2n,y2n);
	line(x2n,y2n,x3n,y3n);
	line(x3n,y3n,x1n,y1n);

	getch();
	closegraph();
	return 0;
}