#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI acos(-1)

int main()
{
	int x1,y1,x2,y2,gd = DETECT,gm;
	
	double c,s,angle = 45;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	printf("Enter starting coordinate :");
	scanf("%d%d",&x1,&y1);

	printf("Enter ending coordinate :");
	scanf("%d%d",&x2,&y2);

	line(x1,y1,x2,y2);
	getch();
	closegraph();

	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	c = cos(angle  * PI /180);
	s = sin(angle * PI/180);

	x3 = floor(x1*c + y1*s);
	y3 = floor(-x1*s + y1*c);

	
	x4  = floor(x2*c + y2*s);
	y4 = floor(-x2*s + y2*c);

	line(x3,y3,x4,y4);

	getch();
	closegraph();
	return 0;

}

	
	
	