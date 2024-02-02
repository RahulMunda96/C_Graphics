#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT,gm,i;
	float x ,y,dx,dy,steps;
	int x0,x1,y0,y1;
	
      printf("Enter x0 and x1 : ");
	scanf("%d %d",&x0,&x1);
	printf("Enter y0 and y1 : ");
	scanf("%d %d",&y0,&y1);

 	dx = (float)(x1 - x0);
	dy = (float)(y1 - y0);

	if(dx >= dy)
	{
		steps  =  dx;
	}
	else
	{
		steps = dy;
	}

	dx = dx / steps;
	dy = dy / steps;
	x = x0;
	y = y0;
	i = 1;
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	while(i<=steps)
	{
		putpixel(x,y,YELLOW);
		x += dx;
		y += dy;
		i= i+1;
	}

	getch();
	closegraph();
	return 0;
}