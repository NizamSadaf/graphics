#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int xc,yc,r,p,x,y;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cout<<"Enter X and Y axis:"<<endl;
    cin>>xc>>yc;
    cout<<"Enter radius of the circle:"<<endl;
    cin>>r;
    x=0;
    y=r;
    p=1-r;
    while(x<=y)
    {
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc+y,yc+x,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc+y,yc-x,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-y,yc+x,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc-y,yc-x,WHITE);
        if(p<0)
        {
            p=p+2*x+3;
        }
        else
        {
            p=p+2*(x-y)+5;
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}

/*
x=150 y=200
r=30
*/
