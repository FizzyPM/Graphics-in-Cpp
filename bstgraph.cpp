#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
   int gd = DETECT;
   int gm;
   int i;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   initwindow(1385,750,"BST_Insertion",-10,-5,false,true);

   setcolor(WHITE);
    outtextxy(650,650,"Press Any Key");
    getch();
    setcolor(BLACK);
    outtextxy(650,650,"Press Any Key");

    setcolor(WHITE);
    circle(523,157,20);
    outtextxy(520,150,"1");

   setcolor(WHITE);
   circle(583,107,20);
   outtextxy(580,100,"3");

    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(703,107,20);
   outtextxy(700,100,"8");

   setcolor(WHITE);
   circle(763,157,20);
   outtextxy(760,150,"9");

   setcolor(WHITE);
   circle(803,207,20);
    outtextxy(800,200,"10");

    setcolor(WHITE);
    circle(670,157,20);
   outtextxy(667,150,"7");

      setcolor(WHITE);
     circle(603,157,20);
   outtextxy(600,150,"5");

//--------------------
    setcolor(LIGHTGRAY);
    line(622,70,600,90);
    line(660,70,685,90);

    line(562,120,540,140);
    line(590,125,602,135);
    line(720,120,745,140);
    line(693,128,685,140);

    line(775,175,785,190);

    outtextxy(650,300,"INSERT 4");

    setcolor(LIGHTBLUE);
    circle(643,57,20);
    outtextxy(640,50,"6");
     setcolor(WHITE);
    outtextxy(580,50,"4<6");
    Sleep(1500);
    setcolor(LIGHTBLUE);
   circle(583,107,20);
   outtextxy(580,100,"3");
    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");
    setcolor(BLACK);
    outtextxy(580,50,"4<6");
    setcolor(WHITE);
    outtextxy(525,100,"4>3");
    Sleep(1500);
    setcolor(LIGHTBLUE);
    circle(603,157,20);
   outtextxy(600,150,"5");
   setcolor(WHITE);
   circle(583,107,20);
   outtextxy(580,100,"3");
    setcolor(BLACK);
    outtextxy(525,100,"4>3");
    setcolor(WHITE);
    outtextxy(580,185,"4<5");
    Sleep(1500);
    setcolor(BLACK);
    outtextxy(580,185,"4<5");
     setcolor(LIGHTBLUE);
    circle(583,207,20);
   outtextxy(580,200,"4");
   setcolor(WHITE);
    circle(603,157,20);
   outtextxy(600,150,"5");

    setcolor(BLACK);
   outtextxy(650,300,"INSERT 4");

   setcolor(WHITE);
   line(600,180,590,187);

   Sleep(1500);
   setcolor(WHITE);
    circle(583,207,20);
   outtextxy(580,200,"4");

    getch();
   closegraph();
   return 0;
}
