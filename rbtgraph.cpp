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
    initwindow(1385,750,"RBT_Insertion",-10,-5,false,true);
   //int maxx = getmaxx();

    setcolor(WHITE);
    outtextxy(650,650,"Press Any Key");
    getch();
    setcolor(BLACK);
    outtextxy(650,650,"Press Any Key");
//AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

// AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");


//ROOT NODE =3
    setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

//INSERTING 1
   for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 1");
    delay(7);
   }
   setcolor(BLACK);
   outtextxy(750,600,"Inserting 1");
   //-------------
   setcolor(RED);
   circle(603,107,20);
   outtextxy(600,100,"1");


//INSERTING 5
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 5");
    delay(7);
   }
   setcolor(BLACK);
   outtextxy(750,600,"Inserting 5");
    //----------
   setcolor(RED);
   circle(683,107,20);
   outtextxy(680,100,"5");


//inserting 7
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 7");
    delay(7);
   }
   setcolor(BLACK);
   outtextxy(750,600,"Inserting 7");
    //----------
   setcolor(RED);
   circle(723,157,20);
   outtextxy(720,150,"7");
   Sleep(1500);

//RED AUNT
   setcolor(LIGHTBLUE);
   outtextxy(560,130,"RED AUNT");
   Sleep(1500);
   setcolor(BLACK);
   outtextxy(560,130,"RED AUNT");
//RED AUNT COLORFLIP
   setcolor(WHITE);
   outtextxy(560,650,"RED AUNT COLORFLIP");
   Sleep(2000);
   setcolor(BLACK);
   outtextxy(560,650,"RED AUNT COLORFLIP");
    //------------
    setcolor(RED);
    circle(643,57,20);
    outtextxy(640,50,"3");
    setcolor(WHITE);
    circle(603,107,20);
    outtextxy(600,100,"1");
    setcolor(WHITE);
    circle(683,107,20);
    outtextxy(680,100,"5");
    Sleep(2000);

//ROOT NODE SHOULD BE BLACK
   setcolor(WHITE);
   outtextxy(560,650,"ROOT NODE SHOULD BE BLACK");
   Sleep(2000);
   setcolor(BLACK);
   outtextxy(560,650,"ROOT NODE SHOULD BE BLACK");
    //-------------
    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"3");
    Sleep(1000);

//INSERTING 6
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 6");
    delay(7);
   }
    setcolor(BLACK);
    outtextxy(750,600,"Inserting 6");
    //---------
    setcolor(RED);
    circle(683,207,20);
    outtextxy(680,200,"6");
//RL ROTATE
    setcolor(WHITE);
    line(730,100,770,145);
    line(770,155,730,200);
    outtextxy(800,150,"RL ROTATION CASE");
    Sleep(2000);
    setcolor(WHITE);
    line(730,100,770,145);
    line(770,155,730,200);
    outtextxy(800,150,"RL ROTATION CASE");
//RL CASE

    setcolor(LIGHTMAGENTA);
   circle(683,107,20);
   outtextxy(680,100,"5");

   circle(723,157,20);
   outtextxy(720,150,"7");

  circle(683,207,20);
    outtextxy(680,200,"6");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

// AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

        setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(LIGHTMAGENTA);
   circle(683,107+i,20);
   outtextxy(680,100+i,"5");

   circle(723,157,20);
   outtextxy(720,150,"7");

    circle(683,207-(2*i),20);
    outtextxy(680,200-(2*i),"6");
    delay(20);
    cleardevice();
   }
   setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(LIGHTMAGENTA);
   circle(683,157,20);
   outtextxy(680,150,"5");

   circle(723,157,20);
   outtextxy(720,150,"7");

    circle(683,107,20);
    outtextxy(680,100,"6");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
        //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

// AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

    setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(LIGHTMAGENTA);
   circle(683-i,157,20);
   outtextxy(680-i,150,"5");

   circle(723,157,20);
   outtextxy(720,150,"7");

    circle(683,107,20);
    outtextxy(680,100,"6");
   delay(20);
    cleardevice();
   }

 ///////////////////////////////////
 ///////////////////////////////////
 ////////FINAL TREE BELOW

   //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

// AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

    setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(RED);
     circle(643,157,20);
   outtextxy(640,150,"5");

   setcolor(RED);
   circle(723,157,20);
   outtextxy(720,150,"7");

   setcolor(WHITE);
    circle(683,107,20);
    outtextxy(680,100,"6");
        //--------------------
    Sleep(2000);
//INSERTING 8
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 8");
    delay(7);
   }
    setcolor(BLACK);
    outtextxy(750,600,"Inserting 8");
    //---------
    setcolor(RED);
   circle(763,207,20);
   outtextxy(760,200,"8");
//RED AUNT
   setcolor(LIGHTBLUE);
   outtextxy(600,180,"RED AUNT");
   Sleep(1500);
   setcolor(BLACK);
   outtextxy(600,180,"RED AUNT");
//RED AUNT COLORFLIP
   setcolor(WHITE);
   outtextxy(560,650,"RED AUNT COLORFLIP");
   Sleep(2000);
   setcolor(BLACK);
   outtextxy(560,650,"RED AUNT COLORFLIP");
    //------------
    setcolor(RED);
    circle(683,107,20);
    outtextxy(680,100,"6");
    setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");
   setcolor(WHITE);
   circle(723,157,20);
   outtextxy(720,150,"7");

//INSERTING 9
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 9");
    delay(7);
   }
    setcolor(BLACK);
    outtextxy(750,600,"Inserting 9");
    //---------
    setcolor(RED);
   circle(803,257,20);
   outtextxy(800,250,"9");
   Sleep(2000);
//RR ROTATION CASE
    setcolor(WHITE);
    line(750,150,790,199);
    line(790,201,830,250);
    outtextxy(800,150,"RR ROTATION CASE");
    Sleep(2000);
    setcolor(BLACK);
    line(750,150,790,195);
    line(790,205,830,250);
    outtextxy(800,150,"RR ROTATION CASE");
//RR CASE
    setcolor(LIGHTMAGENTA);
   circle(723,157,20);
   outtextxy(720,150,"7");

   circle(763,207,20);
   outtextxy(760,200,"8");

   circle(803,257,20);
   outtextxy(800,250,"9");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {
                        //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

        setcolor(RED);
    circle(683,107,20);
    outtextxy(680,100,"6");

        setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");

   setcolor(LIGHTMAGENTA);
   circle(723,157+i,20);
   outtextxy(720,150+i,"7");

   circle(763,207-i,20);
   outtextxy(760,200-i,"8");

   circle(803,257-i,20);
   outtextxy(800,250-i,"9");
   delay(20);
    cleardevice();
   }
                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

   setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");

   setcolor(RED);
    circle(683,107,20);
    outtextxy(680,100,"6");

    setcolor(LIGHTMAGENTA);
    circle(723,207,20);
   outtextxy(720,200,"7");

   circle(763,157,20);
   outtextxy(760,150,"8");

   circle(803,207,20);
   outtextxy(800,200,"9");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {
                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

        setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");

   setcolor(RED);
    circle(683,107,20);
    outtextxy(680,100,"6");

    setcolor(LIGHTMAGENTA);
   circle(723-i,207,20);
   outtextxy(720-i,200,"7");

   circle(763-i,157,20);
   outtextxy(760-i,150,"8");

   circle(803-i,207,20);
   outtextxy(800-i,200,"9");
   delay(20);
    cleardevice();
   }

   ///////////////////////////////////
 ///////////////////////////////////
 ////////FINAL TREE BELOW

                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

   setcolor(WHITE);
    circle(643,57,20);
   outtextxy(640,50,"3");

   setcolor(WHITE);
   circle(603,107,20);
   outtextxy(600,100,"1");

   setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");

   setcolor(RED);
    circle(683,107,20);
    outtextxy(680,100,"6");

   setcolor(RED);
    circle(683,207,20);
   outtextxy(680,200,"7");

   setcolor(WHITE);
   circle(723,157,20);
   outtextxy(720,150,"8");

   setcolor(RED);
   circle(763,207,20);
   outtextxy(760,200,"9");
     setcolor(LIGHTGRAY);
   line(630,75,615,92);
    line(660,70,677,87);
    line(670,123,650,137);
    line(700,120,722,137);
    line(720,175,700,193);
    line(730,175,752,187);
        //--------------------
        Sleep(1500);
//INSERTING 10
    for(i=500;i<=750;i++){
    setcolor(WHITE);
    outtextxy(i,600,"Inserting 10");
    delay(7);
   }
    setcolor(BLACK);
    outtextxy(750,600,"Inserting 10");
    //---------
    setcolor(RED);
    circle(803,257,20);
    outtextxy(800,250,"10");
    Sleep(2000);
//RED AUNT
   setcolor(LIGHTBLUE);
   outtextxy(600,230,"RED AUNT");
   Sleep(1500);
   setcolor(BLACK);
   outtextxy(600,230,"RED AUNT");
//RED AUNT COLORFLIP
   setcolor(WHITE);
   outtextxy(560,650,"RED AUNT COLORFLIP");
   Sleep(2000);
   setcolor(BLACK);
   outtextxy(560,650,"RED AUNT COLORFLIP");
    //------------
    setcolor(WHITE);
    circle(683,207,20);
   outtextxy(680,200,"7");
   setcolor(RED);
   circle(723,157,20);
   outtextxy(720,150,"8");
   setcolor(WHITE);
   circle(763,207,20);
   outtextxy(760,200,"9");
    Sleep(2000);

//RR ROTATION CASE
    setcolor(WHITE);
    line(675,50,715,99);
    line(715,101,755,150);
    outtextxy(800,100,"RR ROTATION CASE");
    Sleep(2000);
    setcolor(BLACK);
     line(675,50,715,99);
    line(715,101,755,150);
    outtextxy(800,100,"RR ROTATION CASE");

//RR CASE
    setcolor(LIGHTMAGENTA);
    circle(643,57,20);
   outtextxy(640,50,"3");

    circle(683,107,20);
    outtextxy(680,100,"6");

   circle(723,157,20);
   outtextxy(720,150,"8");
    //FOR UPWARD SHIFTING
    for(i=0;i<=50;i++)
    {

                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

        setcolor(WHITE);
    circle(603,107+i,20);
    outtextxy(600,100+i,"1");

   setcolor(LIGHTMAGENTA);
   circle(643,57+i,20);
   outtextxy(640,50+i,"3");

    circle(683,107-i,20);
    outtextxy(680,100-i,"6");

   circle(723,157-i,20);
   outtextxy(720,150-i,"8");

   setcolor(WHITE);
   circle(763,207-i,20);
   outtextxy(760,200-i,"9");

   setcolor(RED);
    circle(803,257-i,20);
    outtextxy(800,250-i,"10");

    setcolor(WHITE);
    circle(683,207-i,20);
   outtextxy(680,200-i,"7");

      setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");

   delay(20);
    cleardevice();
   }

                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

    setcolor(WHITE);
    circle(603,157,20);
    outtextxy(600,150,"1");

   setcolor(LIGHTMAGENTA);
   circle(643,107,20);
   outtextxy(640,100,"3");

    circle(683,57,20);
    outtextxy(680,50,"6");

   circle(723,107,20);
   outtextxy(720,100,"8");

   setcolor(WHITE);
   circle(763,157,20);
   outtextxy(760,150,"9");

   setcolor(RED);
    circle(803,207,20);
    outtextxy(800,200,"10");

    setcolor(WHITE);
    circle(683,157,20);
   outtextxy(680,150,"7");

      setcolor(WHITE);
     circle(643,157,20);
   outtextxy(640,150,"5");
   //FOR SIDEWARDS SHIFTING
    for(i=0;i<=40;i++)
    {

                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

   setcolor(WHITE);
    circle(603-(2*i),157,20);
    outtextxy(600-(2*i),150,"1");

   setcolor(LIGHTMAGENTA);
   circle(643-(1.5*i),107,20);
   outtextxy(640-(1.5*i),100,"3");

    circle(683-i,57,20);
    outtextxy(680-i,50,"6");

   circle(723-(0.5*i),107,20);
   outtextxy(720-(0.5*i),100,"8");

   setcolor(WHITE);
   circle(763,157,20);
   outtextxy(760,150,"9");

   setcolor(RED);
   circle(803,207,20);
    outtextxy(800,200,"10");

    setcolor(WHITE);
    circle(683-(i/3),157,20);
   outtextxy(680-(i/3),150,"7");

      setcolor(WHITE);
     circle(643-i,157,20);
   outtextxy(640-i,150,"5");
   delay(20);
    cleardevice();
   }
///////////////////////////////////
///////////////////////////////////
//////////////////////FINAL TREE

                    //AFTER ROTATION
    setcolor(GREEN);
    outtextxy(50,450,"After Rotations");
    setcolor(WHITE);
    circle(83,507,20);
   outtextxy(80,500,"B");
   setcolor(RED);
    circle(43,557,20);
   outtextxy(40,550,"R");
   setcolor(RED);
    circle(123,557,20);
   outtextxy(120,550,"R");

                    // AFTER COLORFLIP
    setcolor(GREEN);
    outtextxy(1250,450,"After Colorflip");
    setcolor(RED);
    circle(1283,507,20);
   outtextxy(1280,500,"R");
   setcolor(WHITE);
    circle(1243,557,20);
   outtextxy(1240,550,"B");
   setcolor(WHITE);
    circle(1323,557,20);
   outtextxy(1320,550,"B");

   setcolor(WHITE);
    circle(523,157,20);
    outtextxy(520,150,"1");

   setcolor(RED);
   circle(583,107,20);
   outtextxy(580,100,"3");

    setcolor(WHITE);
    circle(643,57,20);
    outtextxy(640,50,"6");

    setcolor(RED);
   circle(703,107,20);
   outtextxy(700,100,"8");

   setcolor(WHITE);
   circle(763,157,20);
   outtextxy(760,150,"9");

   setcolor(RED);
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

    for(int j=0;j<5;j++){
    setcolor(j);
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(540,650,"VALID RED-BLACK TREE");
    Sleep(1000);
    }

    getch();
    closegraph();
   return 0;
}
