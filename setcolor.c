//  Program to set background color and color
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd =  DETECT,gm,color;
    initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
    setcolor(YELLOW);
    circle(100,100,50);
    setbkcolor(RED);
    getch();
    closegraph();
    return 0;
}
   
