#include <graphics.h>
#include <conio.h>

int main()
{
	int x1,y1,x2,y2, shx,shy,gd = DETECT,gm;
	
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	
	printf("Enter x1 and y1 coordinate : " );
	scanf("%d%d",&x1,&y1);

	printf("Enter x2 and y2 coordinate : ");
	scanf("%d%d",&x2,&y2);

	rectangle(x1,y1,x2,y2);

	getch();
	closegraph();


	printf("Enter shx and shy : " );
	scanf("%d%d",&shx,&shy);
	
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	
	rectangle(x1*shx,y1*shy,x2*shx,y2*shy);
	
	getch();
	closegraph();
	return 0;
}