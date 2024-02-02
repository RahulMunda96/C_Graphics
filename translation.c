// Program to Translate a Line
#include <graphics.h>
#include <conio.h>

int main()
{
	int x0,y0,x1,y1,tx,ty, gd = DETECT,gm;

	printf("Enter first coordinate : ");
	scanf("%d%d",&x0,&y0);

	printf("Enter second coordinate : ");
	scanf("%d%d",&x1,&y1);

	printf("Enter translation point : ");
	scanf("%d%d",&tx,&ty);
	
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	outtextxy(200, 300,"Line before translation");
	line(x0,y0,x1,y1);
	
	getch();
	closegraph();
	

      initgraph(&gd,&gm,"C://TURBOC3//BGI");
	
	outtextxy(200, 300,"Line after translation");
	line(x0+tx,y0+ty,x1+tx,y1+ty);

	getch();
	closegraph();
	return 0;
}
	
	