#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

void tree(float x, float y, float len, float a, float b)
{
    if (len < 20)
    {
        delay(50);
        setcolor(14);
        circle(x, y, 5);
        setcolor(100);
        circle(x, y, 6);
        return;
    }

    float x1, y1;
    settextstyle(1, 0, 1);
    setcolor(14);
    outtextxy(150, 5, "created by ruzana");
    setcolor(10);
    x1 = x + len * cos(3.1420 * a / 180);
    y1 = y + len * sin(3.1420 * a / 180);
    line(x, y, x1, y1);
    tree(x1, y1, len * 0.75, a - b, -b);
}

int main()
{
    int gd = DETECT, gm, i, rd;
    float x = 320, y = 550, t = 140;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    for (i = 0; i <= 3; i++)
    {
        tree(x + i * 20, y, t, 90, 30);
        tree(x + i * 20, y, t, 90, -30);
    }

    getch();
    closegraph();
    return 0;
}