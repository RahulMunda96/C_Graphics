#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");
 
    int points[] = {320,150,420,300,250,300,320,150};

    drawpoly(4,points);
    
    closegraph();
    return 0;
}