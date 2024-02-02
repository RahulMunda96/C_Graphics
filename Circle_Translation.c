#include <graphics.h>
#include <conio.h>

int main()
{

	int x,y,r,gd =DETECT,gm;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	
	x = getmaxx()/2;
	y = getmaxy()/2;

	printf("Enter radius : " );
	scanf("%d",&r);

	outtextxy(500,600,"Before translation");
	circle(x,y,r);

	getch();
	closegraph();

	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	outtextxy(500,600,"After  translation");
	circle(x + 4, y + 5,r);
	
	
	getch();
	closegraph();

	return 0;
}