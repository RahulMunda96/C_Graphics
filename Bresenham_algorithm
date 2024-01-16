#include <graphics.h>
#include <conio.h>

int main()
{
	int gd = DETECT,gm,x0,x1,y0,y1;
	int x,y,dx,dy,p;
	printf("Enter coordinate value  for x0 and y0 : ");
	scanf("%d%d", &x0 , &y0);

	printf("Enter coordinate value  for x1 and y1 : ");
	scanf("%d %d",&x1,&y1);

	dx = x1 - x0;
	dy = y1 - y0;
   	
	x = x0;
	y = y0;
	
	p = 2*dy - dx;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");  
	
	while(x<x1)
	{
		if(p>=0)
		{
		  putpixel(x,y,RED);
		  y = y + 1; 
		  p = p + 2*dy - 2*dx;	
		}
		else
		{
		  putpixel(x,y,RED);
		  p = p + 2*dy;
		}
		  x = x + 1;
	}


	
	getch();
	closegraph();
	return 0;
}
