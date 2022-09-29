#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,NULL);
    setcolor(RED);
    circle(10,12,22);
    delay(10000);
    closegraph();
}