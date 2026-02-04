#include <graphics.h>
#include <conio.h>
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, (char*)"");
setcolor(GREEN);
setfillstyle(SOLID_FILL, GREEN);
rectangle(170, 150, 470, 330);
floodfill(300, 200, GREEN);
setcolor(RED);
setfillstyle(SOLID_FILL, RED);
circle(290, 240, 60);
floodfill(290, 240, RED);
getch();
closegraph();
return 0;
}
