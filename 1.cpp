#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int gd=DETECT,gm;
int steps,i=1;
float x,y,dx,dy,x0,x1,y0,y1;
initgraph(&gd, &gm, "");
cin>>x0>>y0>>x1>>y1;
dx=(x1-x0);
dy=(y1-y0);
if(dx>=dy){
    steps=dx;
}
else{
    steps=dy;
}
dx=dx/steps;
dy=dy/steps;
x=x0;
y=y0;
while(i<=steps){
    putpixel(x,y,RED);
    x+=dx;
    y+=dy;
    i++;
}
getch();
closegraph();
return 0;
}
/*
50 25 200 150
/*
