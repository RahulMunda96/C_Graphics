// Program to draw circle using mid point algorithm
#include <graphics.h>
#include <conio.h>


void concentric(int x_mid,int y_mid,int n)
{
	int gd = DETECT,gm;
	int r = 50;
	int x = r;
	 int y = 0;
	 int p = 1-r;
	
	 initgraph(&gd,&gm,"C://TURBOC3//BGI");
		
	 while(x>=y)
	{
		putpixel(x_mid+x  , y_mid +y ,RED);
		putpixel(x_mid+y , y_mid+x  ,RED);
		putpixel(x_mid-y, y_mid+x  ,RED);
		putpixel(x_mid-x, y_mid+y ,RED);
	      putpixel(x_mid-x , y_mid-y ,RED);
		putpixel(x_mid-y , y_mid-x,RED);
	      putpixel(x_mid+y , y_mid-x,RED);
		putpixel(x_mid+x , y_mid-y,RED);
		
		if(p<0)
		{
			p = p + (2*x) + 1;

		}
		else
		{
			y = y -1;
			p = p + (2*x) - (2*y) + 1;
		}
		x = x + 1;
	 } 
	 getch();
	closegraph();
}
		
				
int main()
{
	int n,x_mid,y_mid;
	
	printf("Enter the coordinate : " );
	scanf("%d%d",&x_mid,&y_mid);
	
	printf("Enter no of circle : ");
	scanf("%d",&n);
	
	concentric(n,x_mid,y_mid);

	return 0;

}
		