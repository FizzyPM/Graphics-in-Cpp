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
    initwindow(1385,750,"AVL",-10,-5,false,true);
   //int maxx = getmaxx();
    settextstyle(DEFAULT_FONT,HORIZ_DIR,0);

    setcolor(WHITE);
    outtextxy(620,650,"Press Any Key");
    getch();
    setcolor(BLACK);
    outtextxy(620,650,"Press Any Key");


    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"3");

    setcolor(WHITE);
   circle(683,107,20);
   outtextxy(680,100,"8");

   setcolor(WHITE);
   circle(723,157,20);
   outtextxy(720,150,"9");

    line(622,70,610,85);//3
    line(660,70,675,90);
    line(700,120,715,140);

    setcolor(WHITE);
   outtextxy(520,550,"   Suppose we have this tree");
   Sleep(1500);
   setcolor(BLACK);
   outtextxy(520,550,"   Suppose we have this tree");
    Sleep(1000);

    setcolor(WHITE);
   outtextxy(520,550,"      & we have to add 10");
    Sleep(1000);

    setcolor(WHITE);
   circle(763,207,20);
    outtextxy(755,200,"10");
    line(740,173,755,190);
     //Sleep(1000);

     setcolor(BLACK);
     outtextxy(520,550,"    & we have to add 10");
        Sleep(1000);

        setcolor(WHITE);
        outtextxy(520,550,"  Now the balance factor at 8 is 2");
        Sleep(1500);
        setcolor(BLACK);
        outtextxy(520,550,"  Now the balance factor at 8 is 2");
        Sleep(1000);

    setcolor(CYAN);
    circle(683,107,20);
   outtextxy(680,100,"8");
    outtextxy(705,100,"BF=2>1");

    Sleep(1000);
    setcolor(WHITE);
        outtextxy(520,550,"          Rotation[RR-case]");
        Sleep(1500);
        setcolor(BLACK);
        outtextxy(520,550,"          Rotation[RR-case]");
        Sleep(1500);
//RR
    setcolor(WHITE);
   circle(683,107,20);
   outtextxy(680,100,"8");
   circle(723,157,20);
   outtextxy(720,150,"9");
    circle(763,207,20);
    outtextxy(755,200,"10");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
         setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"3");
   circle(683,107+i,20);
   outtextxy(680,100+i,"8");
   circle(723,157-i,20);
   outtextxy(720,150-i,"9");
    circle(763,207-i,20);
    outtextxy(755,200-i,"10");
   delay(20);
    cleardevice();
   }
    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"3");
    circle(683,157,20);
   outtextxy(680,150,"8");
   circle(723,107,20);
   outtextxy(720,100,"9");
    circle(763,157,20);
    outtextxy(755,150,"10");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
         setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"3");
   circle(683-i,157,20);
   outtextxy(680-i,150,"8");
   circle(723-i,107,20);
   outtextxy(720-i,100,"9");
    circle(763-i,157,20);
    outtextxy(755-i,150,"10");
   delay(20);
    cleardevice();
   }
   setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"3");
    circle(643,157,20);
   outtextxy(640,150,"8");
   circle(683,107,20);
   outtextxy(680,100,"9");
    circle(723,157,20);
    outtextxy(715,150,"10");
    line(622,70,610,85);//3
    line(660,70,675,90);
    line(700,120,715,140);//10
    line(665,122,650,140);


    getch();
   closegraph();
   return 0;
}
