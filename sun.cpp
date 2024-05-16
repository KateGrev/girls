#include <graphics.h>  
#include <picture.hpp>
  
int sunX = 80;  
int sunY = 80;  
int sunRadius = 30;  
  
void sun(){  
    setcolor(YELLOW);  
    setfillstyle(SOLID_FILL, YELLOW);  
    fillellipse(sunX, sunY, sunRadius, sunRadius);  
}
