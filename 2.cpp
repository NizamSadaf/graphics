#include<iostream>
#include<graphics.h>
using namespace std;
void bline(int x1,int x2,int y1,int y2)
{
    int x=x1,y=y1;
    int dx=x2-x1;
    int dy=y2-y1;
    int dt=2*(dy-dx);
    int ds=2*dy;
    int d=2*dy-dx;
    putpixel(x,y,WHITE);
    while(x<x2)
    {
        x++;
        if(d<0)
        {
            d=d+ds;
        }
        else
        {
            y++;
        }
        d=d+dt;
        putpixel(x,y,WHITE);
    }
}
int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter start point(x,y):"<<endl;
    cin>>x1>>y1;
    cout<<"Enter end point(x,y):"<<endl;
    cin>>x2>>y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    bline(x1,x2,y1,y2);
    getch();
    closegraph();
    return 0;
}
/*
100 200
300 400
*/
