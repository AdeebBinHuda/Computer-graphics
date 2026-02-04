#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    /* int gd,gm;
     detectgraph(&gd,&gm);
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
*/
  int gd,gm;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"C:\\TARBOC3\\BGI");


     line(20,20,70,20);
     line(20,20,20,60);
     line(20,60,110,60);
     line(70,20,70,120);

ellipse(250, 200, 0, 360, 100, 50);

circle(300, 195, 5);
circle(300, 195, 2);
     getchar();
     return 0;
}
