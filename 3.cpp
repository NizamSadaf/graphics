#include<iostream>
#include<graphics.h>
using namespace std;
void circlecoordinate(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc-y,yc-x,WHITE);
}
void bcircle(int xc,int yc,int r)
{
    int x=0,y=r;
    int d=3-2*r;
    circlecoordinate(xc,yc,x,y);
    while(x<=y)
    {
        circlecoordinate(xc,yc,x,y);
        if(d<0)
        {
            d=d+4*x+6;
        }
        else
        {
            d=d+4*(x-y)+10;
            y--;
        }
        x++;
    }
}
int main()
{
    int xc,yc,r;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cout<<"Enter X and Y axis:"<<endl;
    cin>>xc>>yc;
    cout<<"Enter radius of the circle:"<<endl;
    cin>>r;
    bcircle(xc,yc,r);
    getch();
    closegraph();
    return 0;
}
/*
x=100 y=50
r=30
*/
