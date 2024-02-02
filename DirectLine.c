#include <graphics.h>
#include <conio.h>
int main()
{
	int gd =  DETECT,gm;
	int x1,x2,y1,y2,x,y,c ,xc,dx,dy;
	float m;
	
	printf("Enter x1 and y1 values : ");
	scanf("%d%d ",&x1,&y1);
    	
 	printf("Enter coordinates for x1 and y2");
      scanf("%d%d",&x1,&y2); 
      dx =  x2 - x1;
	dy = y2 - y1;
      m = dy/dx;
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	if (dx>0)
	{
		x = x1;
		y = y1;
		xc = x2;
      }
	else if(dx<0)
	{
		x =x2;
		y = y2;
		xc = x1;
	}
	c = y-m*x;
	while(x<=xc)
      {
		putpixel(x,y,RED);
		x++;
		y = m*x + c;
	}

	getch();
	closegraph();
	return 0;

}

	