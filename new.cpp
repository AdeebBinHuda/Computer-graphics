#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <sstream>
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, (char*)"");
setcolor(WHITE);
ellipse(250, 200, 0, 360, 100, 50);
line(150, 200, 120, 170);
line(120, 170, 120, 230);
line(120, 230, 150, 200);
circle(300, 195, 5);
circle(300, 195, 2);
getch();
closegraph();
return 0;
}
