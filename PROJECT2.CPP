#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<process.h>

int maxx=getmaxx();
int maxy=getmaxy();


void star(float x, float y , float a,int bcolor,int color)
{ setcolor(bcolor);
setfillstyle(1,color) ;
int str[]={x-a,y-a,x-6*a,y,x-a,y+a,x,y+6*a,x+a,y+a,x+6*a,y,x+a,y-a,x,y-6*a,x-a,y-a};
drawpoly(9,str);
fillpoly(9,str);
}



/*******************************************************************/

void stand()
{                  //stand_red
 setcolor(YELLOW);
 int  poly[]= {100,100,140,100,120,130,80,130,100,100};
   setfillstyle(1,RED);
    drawpoly(5,poly);                         //stand
     fillpoly(5,poly);



  //slope
      int poly2[]={80,130,30,255,70,255,120,130,80,130};
   setfillstyle(1,RED);
   drawpoly(5,poly2);
   fillpoly(5,poly2);

      //lader
      setcolor(15);
      line(100,230,140,230);
  line(100,220,140,220);
   line(100,210,140,210);
  line(100,200,140,200);
   line(100,190,140,190);
   line(100,180,140,180);
   line(100,170,140,170);
   line(110,160,140,160);
   line(110,150,140,150);
   line(115,140,140,140);
   line(120,130,140,130);
   line(128,120,140,120);


     setcolor(15);
    ellipse(94,120,60,200,15,24);  //handle arcs
     ellipse(134,120,60,200,15,24);
   line(80,123,28,253);//slope_line1
   line(120,123,68,253);
   //vertical pole
   line(140,100,140,240); //vertical
   line(120,130,120,246);           //vertical
line(100,240,100,180);   //vertical behind
line(80,230,80,246);     //vertical behind2
      //base joit_lines
      line(100,240,140,240);
     line(120,246,80,246);
     line(140,240,120,246);
     line(100,240,80,246);



 }
void movobjects()
  {
      //ground color

  setfillstyle(1,GREEN);
  int gc[]={0,160,68,160,30,255,70,255,108,160,224,160,224,171,219,186,319,186,324,171,324,160,getmaxx(),160,getmaxx(),getmaxy()-160,0,getmaxy()-160,0,160};
  drawpoly(15,gc) ;
  fillpoly(15,gc)   ;
  //table
  setcolor(15);
  setfillstyle(2,13);
  //line(225,150,325,150);
 // line(325,150,325,170);

  //line(225,170,225,150);
  bar(225,150,325,170);
  setcolor(RED);
  line(325,170,225,170);
  int bench2[]={225,170,325,170,320,185,220,185,225,170};


//  table foot
  line(325,170,325,188);
  line(320,185,320,195);
  line(220,185,220,195);
  line(225,185,225,188);
  setfillstyle(1,7);
  drawpoly(5,bench2);
  fillpoly(5,bench2);
  setcolor(GREEN);

  bar(0,getmaxy()-30,getmaxx(),getmaxy());  //green ground below
	     //sky color
	       setcolor(BLACK);

      int scl[]={60,160,68,160,80,130,100,100,140,100,140,0,60,0,60,160};

    int scr[]={getmaxx()/2+35,160,getmaxx(),160,getmaxx(),0,getmaxx()/2+35,0,getmaxx()/2+35,160};

      setfillstyle(1,16);
     fillpoly(8,scl) ;
     fillpoly(5,scr);


       //road_horizontal
       setfillstyle(1,BLACK);
  bar(0,getmaxy()-160,getmaxx(),getmaxy()-30);

	int n=0;
  while(n<600) //this loop is used to produce dashed line
 { n=n+10;
 setcolor(WHITE);
 line(n,getmaxy()-95,20+n,getmaxy()-95);
 setcolor(BLACK);
 line(n+5,getmaxy()-95,15+n,getmaxy()-95);
 }

  }






     void objects()
   {    int stx[50],sty[50];
for(int sr=0;sr<=100;sr++)
{
stx[sr]=rand()%500;
sty[sr]=rand()%150;
star(stx[sr],sty[sr],0.17,14,14) ;
}

   //trees
   setfillstyle(1,GREEN);
int p4[]={150,120,175,70,200,120,150,120};     //tree 1
drawpoly(4,p4);
fillpoly(4,p4);
setfillstyle(1,GREEN);
int p3[]={150,70,175,20,200,70,150,70};
drawpoly(4,p3);
fillpoly(4,p3);
 line(175,120,175,160);





//tree lower
  setfillstyle(1,GREEN);
int p6[]={250,120,275,70,300,120,250,120};     //tree 2
drawpoly(4,p6);
fillpoly(4,p6);
//upper part of tree
setfillstyle(1,GREEN);
int p5[]={250,70,275,20,300,70,250,70};
drawpoly(4,p5);
fillpoly(4,p5);
line(275,120,275,152);
setcolor(15);

	 //MOON
setcolor(15);
setfillstyle(1,15)  ;
circle(30,30,15);
floodfill(30,30,15);
setcolor(16);
setfillstyle(1,16);
circle(30,20,15);
floodfill(30,30,16);
setcolor(15);



 //boy_up
    circle(120,70,8);
    line(120,78,115,100);
    line(120,78,125,100);
    line(120,78,130,83);//hnd1
  line(120,78,110,83);
  //boy1_ground
  circle(160,217,5);//head
    line(160,235,160,222);//back
    line(160,235,155,245);//leg
    line(160,235,165,245);     //leg
    line(160,222,153,231);   //hnd
    line(160,222,167,231);





//Giant wheel stoped
int i,P,Q,j,k,l;
float co1,si1,co2,si2,si3,co3,co4,si4,pi=3.14/180;


 //Round wheel
   setcolor(BLACK);
    //wheel_stand
   P=500;Q=125  ;

    line(P,Q,450,260);
    line(550,260,P,Q);

//charakha
    //inner circle lines

     setcolor(RED);
    line(P-50,Q,P+50,Q);//inner circle line start angle=i=0
    //when i=0;line(P,Q,P+50,Q+0)
    line(P-50*cos(45*pi),Q-50*sin(45*pi),P+50*cos(45*pi),Q+50*sin(45*pi));
    line(P-50*cos(90*pi),Q-50*sin(90*pi),P+50*cos(90*pi),Q+50*sin(90*pi));
    line(P-50*cos(135*pi),Q-50*sin(135*pi),P+50*cos(135*pi),Q+50*sin(135*pi));
  circle(P,Q,50);
    circle(P,Q,10);
    circle(P,Q,120);
    circle(P,Q,118);
    setcolor(BLACK);
    setfillstyle(1,YELLOW);
   /***************************************************************
   ****************************************************************
   To give the gravitational effect to boxes we are  moving them in a
   diferent  circcular path  center (P,Q+15)*/
      //box 1
    setcolor(14);
    line(P+120,Q,P+120,(Q+15));  //hanger
    circle(P+119,Q,2);  //joint


    bar((P-15)+120,(Q+15)+4,(P+15)+120,(Q+15)+20);
    rectangle((P-15)+120,(Q+15),(P+15)+120,(Q+15)+20);
    setcolor(15);
    circle(P-7+120,(Q+15)-6,2);  //man_seating in box
    line(P-7+120,(Q+15)-4,P-7+120,(Q+15)+3);//body
    line(P-7+120,(Q+15)-4,P-12+120,(Q+15)-6); //hand
   line(P-7+120,(Q+15)-4,P-2+120,(Q+15)-6);//hand
     //box1 opp
     setcolor(14);
   line(P-120,Q,P-120,(Q+15));
   circle(P-119,Q,2);  //joint
   rectangle((P-15)-120,(Q+15),(P+15)-120,(Q+15)+20);
   bar((P-15)-120,(Q+15)+4,(P+15)-120,(Q+15)+20);
    setcolor(15);
    circle(P-7-120,(Q+15)-6,2);  //man_seating in box
    line(P-7-120,(Q+15)-4,P-7-120,(Q+15)-1);//body
    line(P-7-120,(Q+15)-4,P-12-120,(Q+15)-6); //hand
    line(P-7-120,(Q+15)-4,P-2-120,(Q+15)-6);//hand
    //box2
    setcolor(14);
   line(P+120/1.42,Q+120/1.42,P+120/1.42,(Q+15)+120/1.42);//hanger
   circle(P+119/1.42,Q+119/1.42,2);  //joint
   bar((P-15)+120/1.42,(Q+15)+120/1.42,(P+15)+120/1.42,(Q+15)+20+120/1.42);//box
    setcolor(15);
    circle(P-7+120/1.42,(Q+15)-6+120/1.42,2);  //man_seating in box
    line(P-7+120/1.42,(Q+15)-4+120/1.42,P-7+120/1.42,(Q+15)-1+120/1.42);//body
    line(P-7+120/1.42,(Q+15)-4+120/1.42,P-12+120/1.42,(Q+15)-6+120/1.42); //hand
    line(P-7+120/1.42,(Q+15)-4+120/1.42,P-2+120/1.42,(Q+15)-6+120/1.42);//hand

   //box2 opp
   setcolor(14);
   line(P-120/1.42,Q-120/1.42,P-120/1.42,(Q+15)-120/1.42);//hanger
   circle(P-119/1.42,Q-119/1.42,2);  //joint
   bar((P-15)-120/1.42,(Q+15)-120/1.42,(P+15)-120/1.42,(Q+15)+20-120/1.42);//box
    setcolor(15);
    circle(P-7-120/1.42,(Q+15)-6-120/1.42,2);  //man_seating in box
    line(P-7-120/1.42,(Q+15)-4-120/1.42,P-7-120/1.42,(Q+15)-1-120/1.42);//body
    line(P-7-120/1.42,(Q+15)-4-120/1.42,P-12-120/1.42,(Q+15)-6-120/1.42); //hand-
    line(P-7-120/1.42,(Q+15)-4-120/1.42,P-2-120/1.42,(Q+15)-6-120/1.42);//hand


    // box3
    setcolor(14);
   line(P,Q+120,P,(Q+15)+120);//handle
    circle(P,Q+119,2);  //joint
   bar((P-15),(Q+15)+120,(P+15),(Q+15)+20+120);
   //box3 opp
    line(P,Q-120,P,(Q+15)-120);
      circle(P,Q-119,2);  //joint
   bar((P-15),(Q+15)-120,(P+15),(Q+15)+20-120) ;
 //box 4
   line(P-120/1.42,Q+120/1.42,P-120/1.42,(Q+15)+120/1.42);
    circle(P+119*co4,Q+119*si4,2);  //joint
   bar((P-15)-120/1.42,(Q+15)+120/1.42,(P+15)-120/1.42,(Q+15)+20+120/1.42);
   //box4 opp
   line(P+120/1.42,Q-120/1.42,P+120/1.42,(Q+15)-120/1.42);
    circle(P+119/1.42,Q-119/1.42,2);  //joint
   bar((P-15)+120/1.42,(Q+15)-120/1.42,(P+15)+120/1.42,(Q+15)+20-120/1.42);



}



  /****************************************************************************/





  /************************************************************************
  **************************************************************************
  ******************MAIN FUNCTION STARTS************************************/

void main()

{
 int gd=DETECT,gm,P,Q,ch,poly1,poly2,z=2;
 float pi=3.14/180,co1,si1,co2,si2,si3,co3,co4,si4;
 int i,j,k,l;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");


   movobjects();
   setcolor(GREEN);
 objects();
 stand();

       star(15,60,0.3,15,15);
star(25,70,0.4,15,15);
star(35,60,0.4,15,15);
star(25,20,0.2,15,15);
star(50,60,0.5,15,15);
star(220,40,0.5,15,15);
star(220,30,0.3,15,15);
star(260,20,0.2,15,15);
star(255,10,0.1,15,15);
star(245,15,0.3,15,15);
star(180,10,0.2,15,15);
star(188,10,0.2,15,15);
star(170,15,0.1,15,15);
star(210,10,0.3,15,15);
star(230,10,0.2,15,15);
star(200,30,0.2,15,15);
star(150,10,0.2,15,15);
//
star(120,10,0.2,15,15);
star(100,10,0.2,15,15);
star(100,20,0.3,15,15);
star(120,30,0.3,15,15);
star(110,15,0.4,15,15);
star(95,10,0.4,15,15);
star(80,20,0.3,15,15);
star(70,10,0.2,15,15);
star(70,30,0.3,15,15);
star(50,30,0.2,15,15);
star(50,50,0.2,15,15);

delay(3000);

start:
while(1)
     {
       for(int r=0,i=30;r<=90,i<515;r++,i++)
       {
	  if(r==45)
	   {
	 r=0;
	   }
	  if(kbhit())
	   {
	exit(0);
	   }
//if(i%50!=0)
//{
star(120,10,0.17,14,15);
star(100,10,0.17,15,15);
star(100,20,0.17,15,15);
star(120,30,0.17,15,15);
star(110,15,0.17,15,15);
star(95,10,0.2,15,15);
star(80,20,0.16,14,15);
star(70,10,0.2,14,15);
star(70,30,0.18,14,15);
star(50,30,0.15,14,15);
star(50,50,0.16,14,14);
 //}

       float co1b,si1b,co2b,si2b,cb1,sb1,cb2,sb2,cb3,sb3,cb4,sb4;
       float cob1,sib1,cob2,sib2,cob3,sib3,cob4,sib4;
       co1=cos(i*pi),si1=sin(i*pi);  cob1=cos(5*i*pi) , sib1=sin(5*i*pi);
       cb1= cos(6*i*pi) , sb1=sin(6*i*pi);
       co2=cos(j*pi),si2=sin(j*pi); cob2=cos(5*j*pi),sib2=sin(5*j*pi);
       co3=cos(k*pi),si3=sin(k*pi);  cob3=cos(5*k*pi),sib3=sin(5*k*pi);
       co4=cos(l*pi),si4=sin(l*pi);    cob4=cos(5*l*pi),sib4=sin(5*l*pi);
       movobjects();




       if(i%2==0)
       {


star(25,70,0.4,15,15);
star(25,20,0.2,15,15);
star(220,40,0.5,15,15);
star(260,20,0.2,15,15);
star(245,15,0.3,15,15);
star(188,10,0.2,15,15);
star(210,10,0.3,15,15);
star(200,30,0.2,15,15);
}
if(i%4==0)
{
 star(15,60,0.3,15,15);
star(35,60,0.4,15,15);
star(50,60,0.5,15,15);
star(220,30,0.3,15,15);
star(255,10,0.1,15,15);
star(180,10,0.2,15,15);
star(170,15,0.1,15,15);
star(230,10,0.2,15,15);
star(150,10,0.2,15,15);
}

if(i%15==0)
{
star(25,70,0.4,16,16);

star(25,20,0.2,16,16);

star(220,40,0.5,16,16);

star(260,20,0.2,16,16);

star(245,15,0.3,16,16);

star(188,10,0.2,16,16);

star(210,10,0.3,16,16);

star(200,30,0.2,16,16);


       }



    //bicycle
      int a=-125,b=425;
      setcolor(15);
       //WHITE_Wheel
      circle(a+1.5*i,b,10);
      //Fwd_Wheel
      circle(a+55+1.5*i,b,10);
      setcolor(RED);
      //inner_chan_ ring
      circle(a+1.5*i,b,4);
      //chan
      line(a+1.5*i,b-2,a+25+1.5*i,b-10);
      line(a+1.5*i,b+2,a+25+1.5*i,b+1);
       if(i==514||i==0||z==2||z==16){z++;}
      setcolor(z);
      //line
      line(a+1.5*i,b,a+25+1.5*i,b-5);//bk_wheel to padle
      line(a+55+1.5*i,b,a+35+1.5*i,b-35);//wheel to handle
      line(a+40+1.5*i,b-25,a+1.5*i,b-25);//handle to seat
      line(a+40+1.5*i,b-25,a+25+1.5*i,b-5);  //handle to padle
      line(a+25+1.5*i,b,a+10+1.5*i,b-30);  //padle to seat
      line(a+1.5*i,b,a+15+1.5*i,b-25); //bk_wheel to seat
     line(a+28+1.5*i,b-40,a+45+1.5*i,b-30); //handle
     line(a+28+1.5*i,b-40,a+24+1.5*i,b-40);//gripper
     line(a+45+1.5*i,b-30,a+41+1.5*i,b-30); //griper
    //Wheel_Spokes
    setcolor(WHITE);
    line(a+10*cob1+1.5*i,b+10*sib1,a-10*cob1+1.5*i,b-10*sib1);//Bk
    line(a+55+10*cob1+1.5*i,b+10*sib1,a+55-10*cob1+1.5*i,b-10*sib1); //Fwd
     setcolor(14);
     line(a+10*cob2+1.5*i,b+10*sib2,a-10*cob2+1.5*i,b-10*sib2); //Bk
     line(a+55+10*cob2+1.5*i,b+10*sib2,a+55-10*cob2+1.5*i,b-10*sib2); //Fwd
     setcolor(10);
     line(a+10*cob3+1.5*i,b+10*sib3,a-10*cob3+1.5*i,b-10*sib3); //Bk
      line(a+55+10*cob3+1.5*i,b+10*sib3,a+55-10*cob3+1.5*i,b-10*sib3);  //Fwd
    setcolor(9);
    line(a+10*cob4+1.5*i,b+10*sib4,a-10*cob4+1.5*i,b-10*sib4);//Bk
     line(a+55+10*cob4+1.5*i,b+10*sib4,a+55-10*cob4+1.5*i,b-10*sib4); //Fwd
      //seat
      int st[]={a+5+1.5*i,b-30,a+16+1.5*i,b-30,a+10+1.5*i,b-34,a+5+1.5*i,b-30};
      setfillstyle(1,2);
      drawpoly(4,st);
      fillpoly(4,st);
    //man
    int w=z+4;

    if(w==0||w==16||w-3==16 || w==1 || w-3==1 || w-3==0 ||w==4||w-3==4){w=w+1;
    }
      setcolor(w);
      setfillstyle(1,w-3);
      ellipse(a+10+1.5*i,b-50,0,360,4,6);  //head
      floodfill(a+10+1.5*i,b-50,w);
      line(a+10+1.5*i,b-44,a+10+1.5*i,b-30);    //back
      line(a+10+1.5*i,b-44,a+17+1.5*i,b-39);//hand1
      line(a+17+1.5*i,b-39,a+24+1.5*i,b-40) ;      //hand 1
      line(a+10+1.5*i,b-44,a+23+1.5*i,b-33);//hand2
      line(a+23+1.5*i,b-33,a+41+1.5*i,b-30);
      line(a+10+1.5*i,b-30,a+23+1.5*i,b-20);   //leg1
      line(a+23+1.5*i,b-20,a+25+7*cb1+1.5*i,b-5+7*sb1);
      line(a+10+1.5*i,b-30,a+20+1.5*i,b-17);   //leg2
      line(a+20+1.5*i,b-17,a+25-7*cb1+1.5*i,b-5-7*sb1);
      setcolor(RED);
      //padle_circle and foot stand
     circle(a+25+1.5*i,b-5,5);//padle circle
      setcolor(YELLOW);
    line(a+25+7*cb1+1.5*i,b-5+7*sb1,a+25-7*cb1+1.5*i,b-5-7*sb1);//both padle line
    line(a+25+7*cb1+1.5*i,b-5+7*sb1,a+28+7*cb1+1.5*i,b-5+7*sb1) ;  //footstand1
    line(a+25-7*cb1+1.5*i,b-5-7*sb1,a+22-7*cb1+1.5*i,b-5-7*sb1); //footstand2

    //car
    setcolor(z+1);
    line(getmaxx()+150-3*i,b-100,getmaxx()+235-3*i,b-100);
  //  line(getmaxx()+143-3*i,b-93,getmaxx()+150-3*i,b-93);
    line(getmaxx()+138-3*i,b-82,getmaxx()+150-3*i,b-100);
 //font window border
 line(getmaxx()+138-3*i,b-82,getmaxx()+138-3*i,b-53);//line vertical
 line(getmaxx()+138-3*i,b-53,getmaxx()+168-3*i,b-53);//horizontal
 line(getmaxx()+168-3*i,b-53,getmaxx()+168-3*i,b-100);//2nd vertical
 //font window

 line(getmaxx()+143-3*i,b-82,getmaxx()+163-3*i,b-82);
 line(getmaxx()+163-3*i,b-82,getmaxx()+163-3*i,b-95);
 line(getmaxx()+163-3*i,b-95,getmaxx()+152-3*i,b-95);
 line(getmaxx()+152-3*i,b-95,getmaxx()+143-3*i,b-82);
 setcolor(14);
 setcolor(z+1);
  //middle window border
 line(getmaxx()+200-3*i,b-60,getmaxx()+200-3*i,b-100);

 //midlle window
 line(getmaxx()+195-3*i,b-95,getmaxx()+195-3*i,b-82);
 line(getmaxx()+195-3*i,b-82,getmaxx()+174-3*i,b-82);
 line(getmaxx()+174-3*i,b-95,getmaxx()+174-3*i,b-82);
 line(getmaxx()+174-3*i,b-95,getmaxx()+195-3*i,b-95);

//line from front wheel to back wheel
line(getmaxx()+140-3*i,b-57,getmaxx()+190-3*i,b-57);
arc(getmaxx()+200-3*i,b-50,0,180,10);
//line(from back wheel to back end
line(getmaxx()+210-3*i,b-57,getmaxx()+235-3*i,b-57);
//line  from gate
line(getmaxx()+138-3*i,b-80,getmaxx()+235-3*i,b-80);

//back window
line(getmaxx()+205-3*i,b-95,getmaxx()+226-3*i,b-95);
line(getmaxx()+226-3*i,b-95,getmaxx()+226-3*i,b-82);
line(getmaxx()+226-3*i,b-82,getmaxx()+205-3*i,b-82);
line(getmaxx()+205-3*i,b-82,getmaxx()+205-3*i,b-95);


       line(getmaxx()+90-3*i,b-75,getmaxx()+138-3*i,b-82);
    line(getmaxx()+85-3*i,b-50,getmaxx()+90-3*i,b-75);
    line(getmaxx()+85-3*i,b-50,getmaxx()+115-3*i,b-50);
    arc(getmaxx()+125-3*i,b-50,0,180,10);
    line(getmaxx()+135-3*i,b-50,getmaxx()+190-3*i,b-50);
    line(getmaxx()+210-3*i,b-50,getmaxx()+235-3*i,b-50);
    line(getmaxx()+235-3*i,b-50,getmaxx()+235-3*i,b-100);//back vertical
    //satepny
    line(getmaxx()+235-3*i,b-75,getmaxx()+237-3*i,b-75) ;
    ellipse(getmaxx()+240-3*i,b-75,0,360,3,10);
    ellipse(getmaxx()+240-3*i,b-75,0,360,2,9);

      setcolor(14);
     //Fwd_Wheel
      circle(getmaxx()+125-3*i,b-50,8);
      circle(getmaxx()+125-3*i,b-50,5);
      line((getmaxx()+125)+5*cos(8*-i*pi)-3*i,(b-50)+5*sin(8*-i*pi),(getmaxx()+125)-5*cos(8*-i*pi)-3*i,(b-50)-5*sin(8*-i*pi));
      line((getmaxx()+125)+5*cos(8*-(i+60)*pi)-3*i,(b-50)+5*sin(8*-(i+60)*pi),(getmaxx()+125)-5*cos(8*-(i+60)*pi)-3*i,(b-50)-5*sin(8*-(i+60)*pi));
      line((getmaxx()+125)+5*cos(8*-(i+120)*pi)-3*i,(b-50)+5*sin(8*-(i+120)*pi),(getmaxx()+125)-5*cos(8*-(i+120)*pi)-3*i,(b-50)-5*sin(8*-(i+120)*pi));


      //back wheel
       circle(getmaxx()+200-3*i,b-50,8);
       circle(getmaxx()+200-3*i,b-50,5);
       line((getmaxx()+200)+5*cos(8*-i*pi)-3*i,(b-50)+5*sin(8*-i*pi),(getmaxx()+200)-5*cos(8*-i*pi)-3*i,(b-50)-5*sin(8*-i*pi));
       line((getmaxx()+200)+5*cos(8*-(i+60)*pi)-3*i,(b-50)+5*sin(8*-(i+60)*pi),(getmaxx()+200)-5*cos(8*-(i+60)*pi)-3*i,(b-50)-5*sin(8*-(i+60)*pi));
       line((getmaxx()+200)+5*cos(8*-(i+120)*pi)-3*i,(b-50)+5*sin(8*-(i+120)*pi),(getmaxx()+200)-5*cos(8*-(i+120)*pi)-3*i,(b-50)-5*sin(8*-(i+120)*pi));



    //**************GIANT WHEEL************************//
   //Round wheel
   setcolor(BLACK);
    //wheel_stand
    P=500;Q=125  ;
    line(P,Q,450,260);
    line(550,260,P,Q);

//charakha
    //inner circle lines

     setcolor(RED);
    line(P,Q,P+50*co1,Q+50*si1);//inner circle line start angle=i=0


    //when i=0;line(P,Q,P+50,Q+0)
    line(P,Q,P-50*co1,Q-50*si1);//opp line  ;when i=0; line(P,Q,P-50,Q-0)

  setcolor(15);
//  line from inner to outer circle
  line(P+50*cos((i+22.5)*pi),Q+50*sin((i+22.5)*pi),P+120*cos((i+22.5)*pi),Q+120*sin((i+22.5)*pi));
  line(P-50*cos((i+22.5)*pi),Q-50*sin((i+22.5)*pi),P-120*cos((i+22.5)*pi),Q-120*sin((i+22.5)*pi));
 line(P+50*cos((j+22.5)*pi),Q+50*sin((j+22.5)*pi),P+120*cos((j+22.5)*pi),Q+120*sin((j+22.5)*pi));
 line(P-50*cos((j+22.5)*pi),Q-50*sin((j+22.5)*pi),P-120*cos((j+22.5)*pi),Q-120*sin((j+22.5)*pi));
 line(P+120*cos((k+22.5)*pi),Q+120*sin((k+22.5)*pi),P+50*cos((k+22.5)*pi),Q+50*sin((k+22.5)*pi));
  line(P-120*cos((k+22.5)*pi),Q-120*sin((k+22.5)*pi),P-50*cos((k+22.5)*pi),Q-50*sin((k+22.5)*pi));
   line(P+120*cos((l+22.5)*pi),Q+120*sin((l+22.5)*pi),P+50*cos((l+22.5)*pi),Q+50*sin((l+22.5)*pi));
    line(P-120*cos((l+22.5)*pi),Q-120*sin((l+22.5)*pi),P-50*cos((l+22.5)*pi),Q-50*sin((l+22.5)*pi));
  setcolor(4);
    j=i+90;
    line(P,Q,P+50*co2,Q+50*si2);
    line(P,Q,P-50*co2,Q-50*si2);


    k=i+45;
    line(P,Q,P+50*co3,Q+50*si3);
    line(P,Q,P-50*co3,Q-50*si3 );

    l=j+45;
    line(P,Q,P+50*co4,Q+50*si4);
    line(P,Q,P-50*co4,Q-50*si4);
    circle(P,Q,50);
    circle(P,Q,10);
    circle(P,Q,120);
    circle(P,Q,118);
    setcolor(BLACK);
    setfillstyle(1,YELLOW);
   /***************************************************************
   ****************************************************************
   To give the gravitational effect to boxes we are  moving them in a
   diferent  circcular path  center (P,Q+15)*/
      //box 1
      setcolor(14);
    line(P+120*co1,Q+120*si1,P+120*co1,(Q+15)+120*si1);  //hanger
    circle(P+119*co1,Q+119*si1,2);  //joint
    bar((P-15)+120*co1,(Q+15)+4+120*si1,(P+15)+120*co1,(Q+15)+20+120*si1);
    rectangle((P-15)+120*co1,(Q+15)+120*si1,(P+15)+120*co1,(Q+15)+20+120*si1);
    setcolor(15);
    circle(P-7+120*co1,(Q+15)-6+120*si1,2);  //man_seating in box
    line(P-7+120*co1,(Q+15)-4+120*si1,P-7+120*co1,(Q+15)+3+120*si1);//body
    line(P-7+120*co1,(Q+15)-4+120*si1,P-12+120*co1,(Q+15)-6+120*si1); //hand
    line(P-7+120*co1,(Q+15)-4+120*si1,P-2+120*co1,(Q+15)-6+120*si1);//hand

    //box1 opp
    setcolor(14);
   line(P-120*co1,Q-120*si1,P-120*co1,(Q+15)-120*si1);
   circle(P-119*co1,Q-119*si1,2);  //joint
     rectangle((P-15)+120*co1,(Q+15)+120*si1,(P+15)+120*co1,(Q+15)+20+120*si1);
   bar((P-15)-120*co1,(Q+15)-120*si1,(P+15)-120*co1,(Q+15)+20-120*si1);
    setcolor(15);
    circle(P-7-120*co1,(Q+15)-6-120*si1,2);  //man_seating in box
    line(P-7-120*co1,(Q+15)-4-120*si1,P-7-120*co1,(Q+15)-1-120*si1);//body
    line(P-7-120*co1,(Q+15)-4-120*si1,P-12-120*co1,(Q+15)-6-120*si1); //hand
    line(P-7-120*co1,(Q+15)-4-120*si1,P-2-120*co1,(Q+15)-6-120*si1);//hand
   //box2
   setcolor(14);
   line(P+120*co2,Q+120*si2,P+120*co2,(Q+15)+120*si2);//hanger
   circle(P+119*co2,Q+119*si2,2);  //joint
   bar((P-15)+120*co2,(Q+15)+120*si2,(P+15)+120*co2,(Q+15)+20+120*si2);//box
    setcolor(15);
    circle(P-7+120*co2,(Q+15)-6+120*si2,2);  //man_seating in box
    line(P-7+120*co2,(Q+15)-4+120*si2,P-7+120*co2,(Q+15)-1+120*si2);//body
    line(P-7+120*co2,(Q+15)-4+120*si2,P-12+120*co2,(Q+15)-6+120*si2); //hand
    line(P-7+120*co2,(Q+15)-4+120*si2,P-2+120*co2,(Q+15)-6+120*si2);//hand

   //box2 opp
   setcolor(14);
 line(P-120*co2,Q-120*si2,P-120*co2,(Q+15)+20-120*si2);  //hanger
  circle(P-119*co2,Q-119*si2,2);  //joint
 bar((P-15)-120*co2,(Q+15)-120*si2,(P+15)-120*co2,(Q+15)+20-120*si2); //box

  setcolor(15);
  circle(P-7-120*co2,(Q+15)-6-120*si2,2);  //man_seating in box
    line(P-7-120*co2,(Q+15)-4-120*si2,P-7-120*co2,(Q+15)-1-120*si2);//body
    line(P-7-120*co2,(Q+15)-4-120*si2,P-12-120*co2,(Q+15)-6-120*si2); //hand
    line(P-7-120*co2,(Q+15)-4-120*si2,P-2-120*co2,(Q+15)-6-120*si2);//hand
    // box3

   setcolor(14);
   line(P+120*co3,Q+120*si3,P+120*co3,(Q+15)+120*si3);//handle
   circle(P+119*co3,Q+119*si3,2);  //joint
   bar((P-15)+120*co3,(Q+15)+120*si3,(P+15)+120*co3,(Q+15)+20+120*si3);

   //box3 opp
    line(P-120*co3,Q-120*si3,P-120*co3,(Q+15)-120*si3);
      circle(P-119*co3,Q-119*si3,2);  //joint
   bar((P-15)-120*co3,(Q+15)-120*si3,(P+15)-120*co3,(Q+15)+20-120*si3) ;
 //box 4
   line(P+120*co4,Q+120*si4,P+120*co4,(Q+15)+120*si4);
    circle(P+119*co4,Q+119*si4,2);  //joint
   bar((P-15)+120*co4,(Q+15)+120*si4,(P+15)+120*co4,(Q+15)+20+120*si4);
   //box4 opp
   line(P-120*co4,Q-120*si4,P-120*co4,(Q+15)-120*si4);
    circle(P-119*co4,Q-119*si4,2);  //joint
   bar((P-15)-120*co4,(Q+15)-120*si4,(P+15)-120*co4,(Q+15)+20-120*si4);

  //stand
  stand();
  //boy is going to slide
      //boy2
      circle(120-0.3*r,70+0.6*r,8);
    line(120-0.3*r,78+0.6*r,115-0.3*r,100+0.6*r);
    line(120-0.3*r,78+0.6*r,125-0.3*r,100+0.6*r);
    line(120-0.3*r,78+0.6*r,130-0.3*r,83+0.6*r);//hnd1
  line(120-0.3*r,78+0.6*r,110-0.3*r,83+0.6*r);



   // boysliding
   circle(100-r,130+2.5*r,8);
   line(100-r,138+2.5*r,95-r,160+2.5*r);//back
   line(100-r,138+2.5*r,90-r,148+2.5*r);  //hnd1
   line(90-r,148+2.5*r,85-r,146+2.5*r);
   line(100-r,138+2.5*r,103-r,155+2.5*r);//hand2
   line(103-r,155+2.5*r,105-r,152+2.5*r);
   line(95-r,160+2.5*r,80-r,168+2.5*r);//leg1
  line(80-r,168+2.5*r,81-r,178+2.5*r);
   line(95-r,160+2.5*r,88-r,168+2.5*r); //leg2
   line(88-r,168+2.5*r,89-r,179+2.5*r);



     delay(10);
      }


  }//WHILE ENDS




  }