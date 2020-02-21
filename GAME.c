#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
  int i,n,r=0,k=6,x,p,s,a=0,b=0,read,c=21;
    printf("\n\n\n\n\n\n\n\n\n\t\t********* WELCOME TO THE WORLD OF STICKS *********");
    system("COLOR AF");
    printf("\n\n\n\n\t\t\t      PRESS ENTER TO CONTINUE...");
    getch();
	system("CLS");
    printf("\a\n\n\t\t\t\tHELLO GAMER \nRULES OF THE GAME:-  ");
	Sleep(500);
	printf("\n\n\a 1~> We have only 21 sticks."); 
	Sleep(500);
	printf("\n\n\a 2~> We have to pic 1 to 4 sticks at once.");
	Sleep(500);
	printf("\n\n\a 3~> The player who pick the last stick will win the game.");
    printf("\n\n\n\n\t\t\t      PRESS ENTER TO CONTINUE...");
    getch();
    system("CLS");
    printf("\n\n\n\n\t\t\t      CHOOSE YOUR PLAYING OPTION :-");
    Sleep(500);
    text:
    printf(" \n\n\a\a 1.PLAYER VS PLAYER \n 2.PLAYER VS COMPUTER \n 3.EXIT \n\nENTER CHOICE = ");
    while(1)
    {
    scanf("%d\a",&x);
	system("CLS");
	        switch(x)	
    {
    case 1:
	while(1)
	{
	printf("\n\nPLAYER A ENTER YOUR CHOICE : ");
	scanf("%d",&a);
	if(a>4||a<1)
	{
	printf("\n\nPLAYER A IS CHEATER B WON");
	break;
	}
	r=r+a;
	printf("\n\tRemaining sticks: %d\a",c-r);
   	for(i=1;i<=(c-r);i++)
   	printf("| ");
	if(r>=21)
	{
	printf("\n\nPLAYER A WON");
	break;
    }
	printf("\n\nPLAYER B ENTER YOUR CHOICE : ");
	scanf("%d",&b);
	if(b>4||b<1)
	{
	printf("\nPLAYER B IS CHEATER A WON");
	break;
	}
	r=r+b;
	printf("\n\tRemaining sticks: %d\a",c-r);
	for(i=1;i<=(c-r);i++)
   	printf(" | ");
	if(r>=21)
	{
	printf("\nPLAYER B WON");
	break;
	}
}	
for(p=1;p<=5;p++)
  { 	system("COLOR AF");
		Sleep(100);
		system("COLOR B2");
		Sleep(100);
		system("COLOR F2");
		Sleep(100);
		system("COLOR CF");
		Sleep(100);
		system("COLOR A3");
  }
   printf("\n\n\n\n\t\t\t      PRESS ENTER TO CONTINUE...");
   getch();
   system("CLS");
   goto text;
   //printf(" \n\n\a\a 1.PLAYER VS PLAYER \n 2.PLAYER VS COMPUTER \n 3.EXIT \n\nENTER CHOICE = ");
   case 2:
   	printf("\n\n\n\n\t\t\t      CHOOSE YOUR LEVEL :-");
    Sleep(500);
    printf(" \n\n\a\a 1.EASY \n 2.NORMAL \n 3.HARD \n 4.EXIT \n\nENTER CHOICE : ");
     while(1)
    {
	scanf("%d\a",&x);
	system("CLS");
	        switch(x)
	{ 
	case 1:
	break;
	case 2:	
	break;
	case 3:
	system("CLS");
	printf("\n\aENTER YOUR CHOICE : ");
    scanf("%d\a",&n);
    if(n>4||n<1)
    {
    	x=0;
    	goto z;
	}
    if(n==1)
 {
 	r=r+n;
 	r=r+n;
 	Sleep(500);
 	printf("\n\aCOMPUTER CHOICE : %d",n);
 
    while(k<=21)//case for r!=4 in 2nd chace of user
 {  printf("\n\nENTER YOUR CHOICE : ");
 	scanf("%d",&s);
	r=r+s;
	if(r==6)
	{
   //	k=k+10;
	r=r+s;
    printf("\n\nCOMPUTER CHOICE : %d",s);
	break;}
 	if(r!=k)
 	{   s=k-r;
 	    r=r+s;
 		printf("\n\nCOMPUTER CHOICE : %d",s);
 		k=k+5;
 		 }
 }
   
    while(k<=21)
 {  
 	printf("\n\nENTER YOUR CHOICE : ");
 	scanf("%d",&s);
 	if(r==11)
 	{
	  r=r+s;
      printf("\n\nCOMPUTER CHOICE : %d",s);
 		break;}
	r=r+s;
 	if(r!=k)
 	{  k=k+10;   
	     s=k-r;
 	     r=r+s;
 		printf("\n\nCOMPUTER CHOICE : %d",s);
 	//	k=k+10;
 		 }
}  
   
    while(k<=21)

 {  
 	printf("\n\nENTER YOUR CHOICE : ");
 	scanf("%d",&s);
 	if(r==16)
 {  p=0;
   goto th;
		 }
	r=r+s;
 	if(r!=k)
 	{    s=k-r;
 	     r=r+s;
 		printf("\n\nCOMPUTER CHOICE : %d",s);
 		k=k+5;
 		 }
}  
   th:
    if(p==0)
	 {
	  printf("COMPUTER CHOICE : 4");
      printf("ENTER YOUR CHOICE : ");
     scanf("%d",&s);
     if(s!=1)
     {
     	printf("COMPUTER WON");
	 }
	 else
	 printf(" YOU WON");}
	 z:
	 	if(x==0)
	 	printf("YOU LOOSE");
}  
   else
   {r=r+n;
    Sleep(500);
	printf("\nComputer Chance : %d\a",n=6-r);
    r=r+n;
    printf("\tRemaining sticks : %d\a ",21-r);
    for(k=1;k<=21-r;k++)
    printf("| ");
    printf("\n");
    while(r<21)
   { printf("\nYour Chance : ");
    scanf("%d\a",&n);
    r=r+n;
    Sleep(500);
    printf("\nComputer Chance : %d\a",n=5-n);
    r=r+n;
    printf("\tRemaining sticks : %d\a ",21-r);
    for(k=1;k<=21-r;k++)
    printf("| ");
    printf("\n");
   }
   printf("\n\n\t\t\a\a\a\a\a\aCOMPUTER WON");
  for(p=1;p<=5;p++)
  { 	system("COLOR AF");
		Sleep(100);
		system("COLOR B2");
		Sleep(100);
		system("COLOR F2");
		Sleep(100);
		system("COLOR CF");
		Sleep(100);
		system("COLOR A3");
  }
   printf("\n\n\n\n\t\t\t      PRESS ENTER TO CONTINUE...");
 }
   getch();
   read:
   system("CLS");
   printf("\n\n\n\n\t\t\t      CHOOSE YOUR LEVEL :-");
   Sleep(500);
   printf(" \n\n\a 1.EASY \n 2.NORMAL \n 3.HARD \n 4.EXIT \n\nENTER CHOICE : "); 
 break;
 case 4:
     	system("COLOR E1");
 		MessageBox(0,"are you sure","WARNING",MB_OK);
 	    exit(0);
 	    break;
default:
     printf("\nCan't You Read the Options.");
     getch();
	 goto read;
}
}
case 3: 
system("COLOR E1");
MessageBox(0,"are you sure want to exit","WARNING",MB_OK);
exit(0);
}
}
}
//LAST DATE OF MODIFICATION OF THIS CODE: 14-10-2018
