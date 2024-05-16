#include <graphics.h>
#include <picture.hpp>

void fence()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 200;

    for (int i = 0; i < 10; ++i)
    {
        line(x, y, x, y - 100);
        x += 50;
    }
 }
