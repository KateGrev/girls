#include <graphics.h> 
 
int main() { 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, ""); 
 
    rectangle(100, 300, 300, 450); 
 
    line(100, 300, 200, 200); 
    line(200, 200, 300, 300); 
 
    rectangle(120, 320, 180, 380); 
 
    rectangle(220, 320, 280, 450); 
 
    delay(5000); 
    closegraph(); 
     
      return 0; 
}