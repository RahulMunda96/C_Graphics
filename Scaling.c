#include <graphics.h>
#include <conio.h>

int main()
{
	int x0,y0,x1,y1,sx,sy,gd = DETECT,gm;

	printf("Enter first coordinate : ");
	scanf("%d%d",&x0,&y0);

	printf("Enter second coordinate : ");
	scanf("%d%d",&x1,&y1);
	
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	line(x0,y0,x1,y1);

	printf("Enter scaling points : ");
	scanf("%d%d",&sx,&sy);

	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	line(x0*sx,y0*sy,x1*sx,y1*sy);

	getch();
	closegraph();
	return 0;
}


	
	
	