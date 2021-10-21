#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void drawpixel(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,YELLOW);
    putpixel(xc-x,yc+y,YELLOW);
    putpixel(xc+x,yc-y,YELLOW);
    putpixel(xc-x,yc-y,YELLOW);
}
void elipsemidpoint(int xc,int yc,int a,int b)
{
    int x=0,y=b;
    int aa=a*a,bb=b*b,aa2=aa*2,bb2=bb*2;
    int fx=0,fy=aa2*b;
    int p1=bb-aa*b+0.25*aa;
    while(fx<fy)
    {
        drawpixel(xc,yc,x,y);
        x++;
        fx=fx+bb2;
        if(p1<0)
        {
            p1=p1+fx+bb;
        }
        else
        {
            y--;
            fy=fy-aa2;
            p1=p1+fx+bb-fy;
        }}
        drawpixel(xc,yc,x,y);
        int p2=bb*(x+0.5)*(x+0.5)+aa*(y-1)*(y-1)-(aa*bb);
        while(y>0)
        {
            y--;
            fy=fy-aa2;
            if(p2>=0)
            {
                p2=p2-fy+aa;
            }
            else
            {
                x++;
                fx=fx+bb2;
                p2=p2+fx-fy+aa;
            }
            drawpixel(xc,yc,x,y);
        }
}
int main()
{
    int xc,yc,a,b;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cin>>xc>>yc>>a>>b;
    elipsemidpoint(xc,yc,a,b);
    getch();
    closegraph();
    return 0;
}
/*
319 239 50 40
*/
