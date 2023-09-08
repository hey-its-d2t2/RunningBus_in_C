#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd =DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//Now we looping the bus
	for(i=0;i<=250;i++){
	cleardevice();
	setbkcolor(11);
	//now add +io afterall x-axis of ourcoading
	//road
	setcolor(15);
	line(0,390,640,390);
	//Lower Part of bus
	setcolor(12);
	line(50+i,360,105+i,360);
	arc(135+i,360,0,180,30);
	line(165+i,360,280+i,360);
	arc(310+i,360,0,180,30);
	line(340+i,360,385+i,360);
	//Upper body part of bus
	setcolor(8);
	line(100+i,195,260+i,195);
	line(50+i,285,385+i,285);
	rectangle(100+i,193,260+i,210);
	line(50+i,360,50+i,210);
	line(385+i,360,385+i,210);
	line(50+i,210,385+i,210);
	line(50+i,280,385+i,280);
	line(130+i,210,130+i,280);
	line(210+i,210,210+i,280);
	line(290+i,210,290+i,280);
	//windows
	setfillstyle(8,8);

	setcolor(15);
	bar(60+i,270,121+i,220);
	setcolor(3);
	rectangle(60+i,270,121+i,220);

	setcolor(15);
	bar(140+i,270,200+i,220);
	setcolor(3);
	rectangle(140+i,270,200+i,220);

	setcolor(15);
	bar(220+i,270,280+i,220);
	setcolor(3);
	rectangle(220+i,270,280+i,220);

	rectangle(300+i,270,375+i,220);
	//Wheels
	circle(135+i,360,25);
	circle(310+i,360,25);
	circle(135+i,360,25);
	circle(310+i,360,25);

	//Stearing wheel
	setcolor(14);
	line(375+i,270,360+i,255);
	arc(358+i,253,0,360,3);
	circle(358+i,253,6);
	//human
	circle(325+i,240,9);
	line(322+i,249,324+i,270);
	line(322+i,249,358+i,255);
	//name
	setcolor(4);
	settextstyle(1,0,2);
	outtextxy(90+i,300,"GHUMMAKAR BUS SERVICES...");
	delay(50);
      }
	getch();
}
