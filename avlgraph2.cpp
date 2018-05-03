#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
   int gd = DETECT;
   int gm;
    int i;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   initwindow(650,350,"LL-case",20,5);

    //LL CASE
   circle(253,87,20);
   outtextxy(250,80,"8");

   circle(213,137,20);
   outtextxy(210,130,"7");

   circle(173,187,20);
   outtextxy(170,180,"6");
   Sleep(2000);
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
    circle(253,87+i,20);
   outtextxy(250,80+i,"8");

   circle(213,137-i,20);
   outtextxy(210,130-i,"7");

   circle(173,187-i,20);
   outtextxy(170,180-i,"6");
   delay(20);
    cleardevice();
   }
    circle(253,137,20);
   outtextxy(250,130,"8");

   circle(213,87,20);
   outtextxy(210,80,"7");

   circle(173,137,20);
   outtextxy(170,130,"6");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253+i,137,20);
   outtextxy(250+i,130,"8");

   circle(213+i,87,20);
   outtextxy(210+i,80,"7");

   circle(173+i,137,20);
   outtextxy(170+i,130,"6");
   delay(20);
    cleardevice();
   }
     circle(293,137,20);
   outtextxy(290,130,"8");

   circle(253,87,20);
   outtextxy(250,80,"7");

   circle(213,137,20);
   outtextxy(210,130,"6");

//--------------------

    initwindow(650,350,"RR-case",670,5);

    //RR CASE
   circle(253,87,20);
   outtextxy(250,80,"7");

   circle(293,137,20);
   outtextxy(290,130,"8");

   circle(333,187,20);
   outtextxy(330,180,"9");
   Sleep(2000);
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,87+i,20);
   outtextxy(250,80+i,"7");

   circle(293,137-i,20);
   outtextxy(290,130-i,"8");

   circle(333,187-i,20);
   outtextxy(330,180-i,"9");
   delay(20);
    cleardevice();
   }
    circle(253,137,20);
   outtextxy(250,130,"7");

   circle(293,87,20);
   outtextxy(290,80,"8");

   circle(333,137,20);
   outtextxy(330,130,"9");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253-i,137,20);
   outtextxy(250-i,130,"7");

   circle(293-i,87,20);
   outtextxy(290-i,80,"8");

   circle(333-i,137,20);
   outtextxy(330-i,130,"9");
   delay(20);
    cleardevice();
   }
    circle(213,137,20);
   outtextxy(210,130,"7");

   circle(253,87,20);
   outtextxy(250,80,"8");

   circle(293,137,20);
   outtextxy(290,130,"9");
//--------------------

     initwindow(650,350,"LR-case",20,360);
        //LR CASE
   circle(253,57,20);
   outtextxy(250,50,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,157,20);
   outtextxy(250,150,"7");
   Sleep(2000);
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,157-(2*i),20);
   outtextxy(250,150-(2*i),"7");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253+i,107,20);
   outtextxy(250+i,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
   delay(20);
    cleardevice();
   }
     circle(293,107,20);
   outtextxy(290,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
//--------------------

initwindow(650,350,"RL-case",670,360);

        //RL CASE
   circle(253,57,20);
   outtextxy(250,50,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,157,20);
   outtextxy(250,150,"8");
   Sleep(2000);
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,157-(2*i),20);
   outtextxy(250,150-(2*i),"8");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253-i,107,20);
   outtextxy(250-i,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
   delay(20);
    cleardevice();
   }
     circle(213,107,20);
   outtextxy(210,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
//--------------------













/*
//RR CASE
   circle(253,57,20);
   outtextxy(250,50,"7");

   circle(293,107,20);
   outtextxy(290,100,"8");

   circle(333,157,20);
   outtextxy(330,150,"9");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"7");

   circle(293,107-i,20);
   outtextxy(290,100-i,"8");

   circle(333,157-i,20);
   outtextxy(330,150-i,"9");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"7");

   circle(293,57,20);
   outtextxy(290,50,"8");

   circle(333,107,20);
   outtextxy(330,100,"9");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253-i,107,20);
   outtextxy(250-i,100,"7");

   circle(293-i,57,20);
   outtextxy(290-i,50,"8");

   circle(333-i,107,20);
   outtextxy(330-i,100,"9");
   delay(20);
    cleardevice();
   }
    circle(213,107,20);
   outtextxy(210,100,"7");

   circle(253,57,20);
   outtextxy(250,50,"8");

   circle(293,107,20);
   outtextxy(290,100,"9");
//--------------------

*/
/*
//LL CASE
   circle(253,57,20);
   outtextxy(250,50,"8");

   circle(213,107,20);
   outtextxy(210,100,"7");

   circle(173,157,20);
   outtextxy(170,150,"6");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"8");

   circle(213,107-i,20);
   outtextxy(210,100-i,"7");

   circle(173,157-i,20);
   outtextxy(170,150-i,"6");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"8");

   circle(213,57,20);
   outtextxy(210,50,"7");

   circle(173,107,20);
   outtextxy(170,100,"6");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253+i,107,20);
   outtextxy(250+i,100,"8");

   circle(213+i,57,20);
   outtextxy(210+i,50,"7");

   circle(173+i,107,20);
   outtextxy(170+i,100,"6");
   delay(20);
    cleardevice();
   }
     circle(293,107,20);
   outtextxy(290,100,"8");

   circle(253,57,20);
   outtextxy(250,50,"7");

   circle(213,107,20);
   outtextxy(210,100,"6");
//--------------------
*/
/*
//RL CASE
   circle(253,57,20);
   outtextxy(250,50,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,157,20);
   outtextxy(250,150,"8");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,157-(2*i),20);
   outtextxy(250,150-(2*i),"8");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253-i,107,20);
   outtextxy(250-i,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
   delay(20);
    cleardevice();
   }
     circle(213,107,20);
   outtextxy(210,100,"7");

   circle(293,107,20);
   outtextxy(290,100,"9");

   circle(253,57,20);
   outtextxy(250,50,"8");
//--------------------
*/
/*
//LR CASE
   circle(253,57,20);
   outtextxy(250,50,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,157,20);
   outtextxy(250,150,"7");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
   circle(253,57+i,20);
   outtextxy(250,50+i,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,157-(2*i),20);
   outtextxy(250,150-(2*i),"7");
   delay(20);
    cleardevice();
   }
    circle(253,107,20);
   outtextxy(250,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
   circle(253+i,107,20);
   outtextxy(250+i,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
   delay(20);
    cleardevice();
   }
     circle(293,107,20);
   outtextxy(290,100,"8");

   circle(213,107,20);
   outtextxy(210,100,"6");

   circle(253,57,20);
   outtextxy(250,50,"7");
//--------------------
*/

   getch();
   closegraph();
   return 0;
}

