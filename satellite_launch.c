//BY, KOTASTHANE ONKAR VIVEK.  DT: 27 July 2015    SATELITE LAUNCH GRAPHICS... (TRIBUTE DR. A. P. J. Abdul Kalam Sir!)
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int xmarg,ymarg;
int ctr=1;
float per;
char ch[20];
int temp;
void main()
{
	int i,x,y,gd=DETECT,gm;
	int t;
	initgraph(&gd,&gm,"bgi\\");
	cleardevice();
	x=10;
	y=480;
	xmarg=4;
	ymarg=5;

	setcolor(3);
	outtextxy(260,1,"SATELLITE IN RANGE");
	setcolor(15);
	outtextxy(440,470,"Live from:'SHRIHARIKOTA'");
	setcolor(8);
	outtextxy(35,355,"4601 ft");
	outtextxy(200,280,"11266 ft");
	outtextxy(430,190,"21586 ft");
	outtextxy(480,60,"24080 ft");

	for(i=0;i<=190;i++)
	{
			putpixel(x,y,7);
			x=x+xmarg;
			y=y-ymarg;//ymarg;
			if(x>=100)
			{
				xmarg=5;//5
				ymarg=2;//2
			}
			if(x>=500)
			{
				xmarg=2; //2
				ymarg=5; //5
			}

	}
	x=10;
	y=480;
	xmarg=4;
	ymarg=5;
	t=11;
	while(t!=-148)//-148
	{
		if(kbhit())
			break;
			setcolor(7);
			line(0,400,640,400);
			setcolor(7);
			line(0,300,640,300);

		gotoxy(1,1);
		printf("P1.34F: %4d /%4d",x,y);
		ctr+=1;
		per=(float)ctr/148*100;
		printf("\nTRAVEL: %7.2f %",per);
		temp=x*43;
		itoa(temp,ch,10);
		for(i=0;ch[i]!='\0';i++);
		ch[i]=' ';
		ch[i+1]='f';
		ch[i+2]='t';

		if(t<=0)
			printf("\nALTITUDE:%7d ft",x*43);
		else
			printf("\nALTITUDE:%7d ft",0);
		printf("\nTIME:%5d sec.",t=t-1);
		if(t>=0)
			delay(1000);
		if(t==0)//<
		{
			printf("\a");
			outtextxy(1,70,"* INDIAN 3-0 LIFT-OFF");
		}
		if(x==78)//>
		{
			printf("\a");
			outtextxy(1,90,"* ROCKETS BURNT OUT at '-17 sec.'");
		}
		if(x==262)//>
		{
			printf("\a");
			outtextxy(1,110,"* ROCKETS SEPARATED at '-55 sec.'");
		}
		if(t==-114)
		{
			printf("\a");
			outtextxy(1,130,"* SATELLITE OUT OF CAGE at '-114 sec.'");
		}
		if(t<=0)
		{
			setcolor(15);
			setfillstyle(1,15);
			bar3d(x-4,y-4,x+4,y+4,NULL,NULL);
			delay(30);
			setcolor(0);
			setfillstyle(1,0);
			bar3d(x-4,y-4,x+4,y+4,NULL,NULL);
			delay(30);//30
			setcolor(6);
			outtextxy(x+20,y+10,ch);
				setcolor(15);
				setfillstyle(1,15);
				bar3d(x-4,y-4,x+4,y+4,NULL,NULL);
				delay(30);
				setcolor(0);
				setfillstyle(1,0);
				bar3d(x-4,y-4,x+4,y+4,NULL,NULL);
				delay(1000);//1000
			putpixel(x,y,10);
			setcolor(0);
			outtextxy(x+20,y+10,ch);


			x=x+xmarg;
			y=y-ymarg;//ymarg;
			if(x>=100)
			{
				xmarg=5;
				ymarg=2;
			}
			if(x>=500)
			{
				xmarg=2;
				ymarg=5;
			}
		}
	}
	setcolor(15);
	outtextxy(190,220,"CONGRATULATIONS!!!");
	outtextxy(150,240,"MISSION INDIAN 3-0 SUCCESSFUL");
	getch();
	closegraph();
}