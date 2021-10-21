#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
            int gd=DETECT,gm;
            initgraph(&gd,&gm,"");
            int x1,y1,x2,y2,tx,ty,nx1,ny1,nx2,ny2,a;
            cout<<"Enter points:";
            cin>>x1>>y1>>x2>>y2;
            setcolor(WHITE);
            cout<<"Enter translation factor:";
            cin>>tx>>ty;
            nx1=x1+tx;
            ny1=y1+ty;
            nx2=x2+tx;
            ny2=y2+ty;
            cout<<"Rectangle after translation"<<endl;
            rectangle(nx1,ny1,nx2,ny2);
            cout<<"Angle of Rotation:";
            cin>>a;
            a=(a*3.14)/180;
            long nnx1=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long nny1=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
            long nnx2=x2+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long nny2=y2+((x2-x1)*sin(a)+(y2-y1)*cos(a));
            setcolor(WHITE);
            rectangle(nnx1,nny1,nnx2,nny2);
            getch();
    closegraph();
    return 0;
}
