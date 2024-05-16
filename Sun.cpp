#include <graphics.h>
#include <iostream>

int sunX = 80;
int sunY = 80;
int sunRadius = 30;

void sun(){
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(sunX, sunY, sunRadius, sunRadius);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    sun();

    getch();
    closegraph();
    
    return 0;
}