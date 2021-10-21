
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,"");
    cout<<"1.Translation\n 2.Rotation"<<endl;
    cout<<"Selection:";
    cin>>s;
    switch(s)
    {
    case 1:
        {
            int x1,y1,x2,y2,tx,ty,nx1,ny1,nx2,ny2;
            cout<<"Enter points:";
            cin>>x1>>y1>>x2>>y2;
            cout<<"Rectangle before translation"<<endl;
            setcolor(WHITE);
            rectangle(x1,y1,x2,y2);
            cout<<"Enter translation factor:";
            cin>>tx>>ty;
            nx1=x1+tx;
            ny1=y1+ty;
            nx2=x2+tx;
            ny2=y2+ty;
            cout<<"Rectangle after translation"<<endl;
            rectangle(nx1,ny1,nx2,ny2);
            getch();
            break;
        }
    case 2:
        {
            int x1,y1,x2,y2,a;
            cout<<"Enter points:"<<endl;
            cin>>x1>>y1>>x2>>y2;
            rectangle(x1,y1,x2,y2);
            cout<<"Angle of Rotation:";
            cin>>a;
            a=(a*3.14)/180;
            long nx1=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long ny1=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
            long nx2=x2+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long ny2=y2+((x2-x1)*sin(a)+(y2-y1)*cos(a));
            setcolor(4);
            rectangle(nx1,ny1,nx2,ny2);
            getch();
            break;
        }
    }
    closegraph();
    return 0;
}
