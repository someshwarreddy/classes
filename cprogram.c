#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
int h;
{  textmode(C40);
   gotoxy(14,12);
   cprintf("* HI *");
   getch();

   textmode(C80);
   gotoxy(22,12);
   cprintf("* This is B Someshwar Reddy *");
   getch();

   textmode(BW80);
   gotoxy(22,12);
   cprintf("* Welcome to you C language * ");
   getch();

   textmode(BW40);
   gotoxy(2,12);
   cprintf("* Introduceing some loop programs *");
   getch();

    textmode(C40);
   gotoxy(4,12);
   cprintf("* Learned c at kiran sir *");
   getch();

   textmode(C80);
   gotoxy(20,12);
   cprintf("Enter the value of n in between 0 t0 56:");
   scanf("%d",&h);
 }
//lvjss:
switch(h)
{
case 0:
{
int r,c,n,m;
int l;
clrscr();
printf("ENTER THE VALUE OF N :");
scanf("%d",&n);
printf("please enter the value of L=any intger number or to exit enter 0:");
scanf("%d",&l);
x:
if(l==0)
{
exit() ;
}
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
m=1;
if(m>n)
continue;
printf("%d ",l);
m++;
}
 printf("\n");
 if(r>=n)
 {
 printf("\n YOU GOT OUT PUT ENTER 0 TO EXIT. FOR CONTINUE ENTER THE VALUE OF L :");
 scanf("%d ",&l);
 if(l==0)
 {
 exit();
 }
 }
 }
 goto x;
getch();
exit(1);
}
case 1:
{
int r,c,n;
clrscr();
printf("enter the n value:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf("%3d",c);
}
printf("\n");
}
getch();
exit(1);
}
case 2:

{
int r,c,n,m;
clrscr();
printf("ENTER THE VALUE OF N=5:");
scanf("%d",&n);
X:
if(n==0)
{
exit();
}

if(n==5)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
if(c<=r)
printf("%d",c);
else
printf("%d",r);

}
 printf("\n");
 }
 printf(" YOU GOT OUT PUT ENTER 0 TO EXIT :");
 //scanf("%d",&n);
 if(n==0)
 {
 exit();
 }
 }
 else
 printf("INVALID NUMBER ENTER N=5 OR 0 TO EXIT:");
 scanf("%d",&n);
 goto X;
getch();
exit(1);
}

case 3:

{
int r,c,n,m=1;
clrscr();
printf(" ENTER THE VALUE OF N:");
scanf("%d",&n);
y:
if(n==0)
{
exit();
}
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",m);
m++;
}
 printf("\n");
 }
 printf("YOU GOT OUT PUT ENTER 0 FOR EXIT OR N FOR CONTINUE:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto y;
getch();
exit(1);
}

case 4:

{
int r,c,n;
clrscr();
printf("ENTER THE VALUE  N=10 :");
scanf("%d",&n);
Y:
if(n==0)
{
exit();
}
if(n==10)
{
for(r=1;r<n;r++)
{
for(c=1;c<n;c++)
{
if(c==1||r==1||r==9||c==9)
printf("1");
else if(r==5&&c==5)
printf("B");
else
printf("0");
}
 printf("\n");
 if(r>=9)
 {
 printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
 }
 }
 }
else
printf("INVALID NUMBER ENTER N=10 OR TO EXIT 0: ");
 scanf("%d",&n);
 if(n==0)
 {
 exit();
 }
 goto Y;

getch();
}
 case 5:

{
int r,c,n,m;
clrscr();
printf("ENTER THE VALUE OF N=10:");
scanf("%d",&n);
if(n==0)
{
exit();
}
xy:
if(n==10)
{
for(r=1;r<=n;r++)
{
for(c=r;c>=1;c--)
{
printf("%d",c);
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT ENTER 0 FOR EXIT:\n");
}
}
for(r=1;r<=n;r++ )
{
for(c=(n-r)+1;1<=c;c--)
{
printf("%d",c);
}
 printf("\n");
 }
}
else
printf("INVALID NUMBER ENTER N=10 OR 0 TO EXIT :");
scanf("%d",&n);
  if(n==0)
  {
  exit();
  }
  goto xy;
getch();
exit(1);
}

case 6:

{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=(n-r)+1;1<=c;c--)
{
printf("%d",c);
}
printf("\n");
}
getch();
exit(1);
}
case 7:

{
int r,c,n,m;
clrscr();
printf("ENTER THE VALUE N=10 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
XY:
if(n==10)
{
for(r=1;r<=n;r++)
{
for(c=1;(n-r+1)>=c;c++)
{
printf("%d",c);
}
printf("\n");
if(r==9)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",c);
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
}
}
}
}
else
printf("INVALID NUMBER ENTER N=10 OR ENTER 0 TO EXIT: ");
scanf("%d",&n);
if(n==0)
{exit();
}
goto XY;
getch();
exit(1);
}
case 8:

{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
printf("%d",(n-r)+1);
}
printf("\n");
}
getch();
exit(1);
}

case 9:

{
int r,c,n,m;
clrscr();
printf("ENTER THE N VALUE:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
printf("%d",r);
}
printf("\n");
}
getch();
exit(1);
}

case 10:

{
int r,c,n,d,m;
clrscr();
printf("ENTER N=9 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
ten:
if(n==9)
for(r=1;r<=n;r++)
{
for(c=1;c<=5;c++)
{
if((r==1)&&(c==1))
printf("%d",r);
else if((r==2)&&(c<=2))
printf("%d",r);
else if((r==3)&&(c<=3))
printf("%d",r);
else if((r==4)&&(c<=4))
printf("%d",r);
if((r==5)&&(c<=5))
printf("%d",r);
else if((r==6)&&(c<=4))
printf("%d",(n-r)+1);
else if((r==7)&&(c<=3))
printf("%d",(n-r)+1);
if((r==8)&&(c<=2))
printf("%d",(n-r)+1);
if((r==9)&&(c<=1))
printf("%d",(n-r)+1);
else
printf(" ");
 }
 printf("\n");
 if(r>=n)
 printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
 }
 else
 printf("INVALID NUMBER ENTER N=9 OR 0 TO EXIT:");
 scanf("%d",&n);
 exit();
 goto ten;
getch();
exit(1);
}
case 11:

{
int r,c,n;
clrscr();
printf("ENTER N VALUE AS ODD NUMBER:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
if(c==1||r==1||r==n||c==n)
printf("%d",n);
else if(c==((n-c)+1)&&r==((n-r)+1))
printf("%d",n);
else
printf("%d",n-1);
}
 printf("\n");
 }
getch();
exit(1);
}

case 12:
{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=r;c>=1;c--)
{
if((r==1)&&(c==1))
printf("A");
else if((r==2))
printf("B");
else if((r==3))
printf("C");
else if(r==4)
printf("D");
else
printf("  ");
}
printf("\n");
}
getch();
exit(1);
}

case 13:

{
int r,c,n,m;
clrscr();
printf("ENTER THE N VLAUE:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
m=n;
c=1;
while(c<=r)
{
printf("%3d",m);
m--;
c++;
}
printf("\n");
}
getch();
exit(1);
}

case 14:
{
int r,c,n,d,m;
clrscr();
printf("ENTER N=9 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
fr:
if(n==9)
for(r=1;r<=n;r++)
{
for(c=1;c<=5;c++)
{
if((r==1)&&(c==1))
printf("%d",c);
else if((r==2)&&(c<=2))
printf("%d",c);
else if((r==3)&&(c<=3))
printf("%d",c);
else if((r==4)&&(c<=4))
printf("%d",c);
if((r==5)&&(c<=5))
printf("%d",c);
else if((r==6)&&(c<=4))
printf("%d",c);
else if((r==7)&&(c<=3))
printf("%d",c);
if((r==8)&&(c<=2))
printf("%d",c);
if((r==9)&&(c<=1))
printf("%d",c);
else
printf(" ");
 }
 printf("\n");
 if(r>=n)
 printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
 }
 else
 printf("INVALID NUMBER ENTER N=9 OR 0 TO EXIT:");
 scanf("%d",&n);
 if(n==0)
 exit();
 goto fr;
getch();
exit(1);
}
case 15:
{
int r,c,n,d,m;
clrscr();
printf("enter the value n 9:");
scanf("%d",&n);
if(n==0)
exit();
sixt:
if(n==9)
for(r=1;r<=n;r++)
{
for(c=1;c<=5;c++)
{
if(c==1)
printf("I");
else if((c==2)&&(c<=r)&&(r<n))
printf("N");
else if((c==3)&&(c<=r)&&(r<n-1))
printf("D");
else if((c==4)&&(c<=r)&&(r<n-2))
printf("I");
if((c==5)&&(r>=c)&&(r<n-3))
printf("A");
else
printf(" ");
 }
 printf("\n");
 if(r>=n)
 printf("you got out put enter 0 to exit:");
 }
 else
 printf("invalid number enter n=9 or 0 to exit:");
scanf("%d",&n);
if(n==0)
exit();
goto sixt;
getch();
exit(1);
}

case 16:
{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;(n-r)+1>=c;c++)
{
printf("%d",c);
}
 for(c=(n-r);1<=c;c--)
{
printf("%d",c);
}

printf("\n");
}
getch();
exit(1);
}

case 17:

{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
  for(c=1;(n-r)+1>=c;c++)
{
printf("  #");

}
 for(c=(n-r);1<=c;c--)
{
printf("  #");
}

printf("\n \n");
}
getch();
exit(1);
}

case 18:
{
int r,c,n,m,d;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("  #");
}
 for(c=3;c>=n-r;c--)
{
m=r;
while(m>=r)
{
printf("  #");
m--;
}
}
printf("\n \n");
}
getch();
exit(1);
}
case 19:
{
int r,c,n,d,m;
clrscr();
printf("ENTER THE N=7 ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
on:
if(n==7)
for(r=1;r<=n;r++)
{
for(c=1;c<=5;c++)
{
if((r==1)&&(c==1))
printf("#");
else if((r==2)&&(c<=2))
printf("#");
else if((r==3)&&(c<=3))
printf("#");
else if((r==4)&&(c<=4))
printf("#");
if((r==5)&&(c<=3))
printf("#");
else if((r==6)&&(c<=2))
printf("#");
else if((r==7)&&(c<=1))
printf("#");
if((r==8)&&(c<=2))
printf("$");
if((r==9)&&(c<=1))
printf("#");
else
printf(" ");
 }
 printf("\n");
 if(r>=n)
 printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
 }
 else
 printf("INVALID NUMBER ENTER N=7 OR ENTER 0 TO EXIT :");
 scanf("%d",&n);
 if(n==0)
 exit();
 goto on;
getch();
exit(1);
}
case 20:
{
int r,c,n,d,m;
clrscr();
printf("ENTER N=7 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
tw:
if(n==7)
for(r=1;r<=n;r++)
{
for(c=1;c<=5;c++)
{
if((r==1)&&(c==1))
printf("A");
else if((r==2)&&(c<=2))
printf("B");
else if((r==3)&&(c<=3))
printf("C");
else if((r==4)&&(c<=4))
printf("D");
if((r==5)&&(c<=3))
printf("C");
else if((r==6)&&(c<=2))
printf("B");
else if((r==7)&&(c<=1))
printf("A");
if((r==8)&&(c<=2))
printf("$");
if((r==9)&&(c<=1))
printf("#");
else
printf(" ");
 }
 printf("\n");
 if(r>=n)
 printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
 }
 else
 printf("INVALID NUMBER ENTER 0 TO EXIT:");
 scanf("%d",&n);
 if(n==0)
 exit();
 goto tw;
getch();
exit(1);
  }

case 21:
{
int r,c,n,j;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
for(c=1;n-r+1>=c;c++)
{
printf("%d",c);
}
for(c=n-r+1;1<=c;c--)
{
printf("%d",c);
}
printf("\n");
}
getch();
exit(1);
}
 case 22:
{
int r,c,n,j;
clrscr();
printf("ENTER N=5 OR ENTER 0 TO EXIT ");
scanf("%d",&n);
if(n==0)
exit();
tth:
if(n==5)
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
for(c=1;c<=n-r+1;c++)
{
printf("%d",c);
}
for(c=n-r;1<=c;c--)
{
printf("%d",c);
}
printf("\n");
if(r>=n)
printf("YOU GOT PUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=7 OR ENTER 0 TO EXIT :");
scanf("%d",&n);
if(n==0)
exit();
goto tth;
getch();
exit(1);
}

case 23:
{
int r,c,n,j;
clrscr();
printf("ENTER N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
tf:
if(n==5)
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
for(c=1;c<=n-r+1;c++)
{
if(r==1)
printf("A");
else if(r==2)
printf("%d",c);
if(r==3)
printf("B");
else if(r==4)
printf("%d",c);
else if(r==5)
printf("C");
}
for(c=n-r;1<=c;c--)
{
if(r==1)
printf("A");
else if(r==2)
printf("%d",c);
if(r==3)
printf("B");
else if(r==4)
printf("%d",c);
else if(r==5)
printf("C");

}
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
else
printf(" INVALID NUMBER ENTER N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto tf;
getch();
exit(1);
}

case 24:
{
int r,c,n,j;
clrscr();
printf("ENTER N=5 OR ENTER 0 TO EXIT :");
scanf("%d",&n);
if(n==0)
exit();
tf1:
if(n==5)
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
for(c=r;c<=n;c++)
{
printf("%d",c);
}
for(c=n-1;c>r-1;c--)
{
printf("%d",c);
}
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto tf1;
getch();
exit(1);
}

case 25:
{
int r,c,n,d,j,m;
char so='A';
clrscr();
printf("PLESE ENTER THE INTEGER NUM 5 OR ENTER 0 TO EXIT : ");
scanf("%d",&n);
if(n==0)
exit();
ts:
if(n==5)
{
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
for(c=r;c<=n;c++)
{
printf("%c",so);
if(r==5)
printf("Z");
so++;
}
for(c=n-1;c>r-1;c--)
{
printf("%c",so);

so++;
}
printf("\n");
}
}
else
printf("PLEAS ENTER INTEGER NUMBER N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto ts;
getch();
exit(1);
}
case 26:
{
int r,c,n,j,m,o;
char so='A',l='D';
clrscr();
printf("ENTER N=5 OR 0 TO EXIT :");
scanf("%d",&n);
if(n==0)
exit();
tse:
if(n==5)
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
so='A';
for(c=r;c<=n;c++)
{
printf("%c",so);
so++;
}

for(c=n-r;c>=1;c--)
{
printf("%c",l);
l--;
}
l=l+n-r-1;
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=5 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto tse;
getch();
}
case 27:
{
int r,c,n,j;
char so='A';
clrscr();
printf("ENTER N=5 OR ENTER 0 TO EXIT: ");
scanf("%d",&n);
if(n==0)
exit();
te:
if(n==5)
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}

 for(c=r;c<=n;c++)
{
printf("%c",so);
so++;
}so='D';
for(c=n-r;1<=c;c--)
{
printf("%c",so);
so--;
}
so=so+2;
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
else
printf("INVALID NUMBER N=5 ENTER 0 TO EXIT: ");
scanf("%d",&n);
if(n==0)
exit();
goto te;
getch();
exit(1);
}

case 28:
{
int r,c,n,m,d;
clrscr();
printf("ENTER THE N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
tn:
if(n==5)
for(r=1;r<=n;r++)
{
d=1;
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%d",c);
}
 for(c=r-1;c>=1;c--)
{
printf("%d",c);
}

printf("\n");
if(r>=n)
printf(" YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
else
printf(" INVALID NUMBER ENTER N=5 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto tn;
getch();
exit(1);
}
case 29:
{
int r,c,n,m=5,d,j;
clrscr();
printf("ENTER THE VALUE INTEGER 10:");
scanf("%d",&n);

if(n==0)
{
exit();
}
 thi:
if(n==10)
{
for(r=1;r<=n;r++)
{
 if(r<=5)
 {
for(c=1;c<=m-r;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%d",c);
}
 for(c=r-1;c>=1;c--)
{
printf("%d",c);
}
}
if(r>5)
{
c=r;
while(5<c)
{
printf(" ");
c--;
}
for(c=1;c<n-r;c++)
{
printf("%d",c);
}
for(c=n-r;c>=1;c--)
{
printf("%d",c);
}
 }

printf("\n");
}
if(r>=10)
{
printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
}

}
else
 printf("ENTERED NUMBER IS INVALID ENTER INTEGER 10:");
 scanf("%d",&n);
 if(n==0)
 {
 exit();
 }
 goto thi;
getch();
}

case 30:
{
int r,c,n,m,d;
char s='A';
clrscr();
printf("ENTER  THE N VALUE MAIMUM 26 MINUMUM 0 :");
scanf("%d",&n);
//if(n>26)
//{
//exit();
//}
thf:
if(n<=26)
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
s='A';
for(c=1;c<=r;c++)
{
printf("%c",s);
s++;
}
d=2;
 s=s-d;
 for(c=r-1;c>=1;c--)
{
printf("%c",s);
s--;
}
d--;
printf("\n");
if(r>=n)
{
  printf("YOU GOT OUT PUT ENTER N GRETER THAN 26 YOU WILL COME OUT FROM PRGRM:");
  if(n>26)
  {
  exit();
  }
  }
}
 else
 printf("ENTER N VALUE BELOW 26 OTHER WISE N IS INVALID:");
 scanf("%d",&n);
 if(n>26)
 {
 exit();
 }
 goto thf;
getch();
exit(1);
}
case 31:
{
int r,c,n,m=5,d,j;
char s;
clrscr();
printf("ENTER THE N=10 OR ENTER 0 TO EXIT :");
scanf("%d",&n);
if(n==0)
{
exit();
}
thse:
if(n==10)
{
for(r=1;r<=n;r++)
{
 if(r<=5)
 {
for(c=1;c<=m-r;c++)
{
printf(" ");
}
s='A';
for(c=1;c<=r;c++)
{
printf("%c",s);
s++;
}
d=2;
s=s-d;
 for(c=r-1;c>=1;c--)
{
printf("%c",s);
s--;
}
d--;
}
if(r>5)
{
c=r;
while(5<c)
{
printf(" ");
c--;
}
for(c=1;c<n-r;c++)
{
printf("%d",c);
}
for(c=n-r;c>=1;c--)
{
printf("%d",c);
}
 }
printf("\n");
}
printf("YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
else
printf("INVALID NUMBER ENTER N=10 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{exit();
}
goto thse;
getch();
exit(1);
}
case 32:
{
int r,c,n,m=5,d,j;
unsigned char s,l='D';
clrscr();
printf("ENTER THE N VALUE 10:");
scanf("%d",&n);
if(n==0)
exit();
tht:
if(n==10)
for(r=1;r<=n;r++)
{
 if(r<=5)
 {
for(c=1;c<=m-r;c++)
{
printf(" ");
}
s='A';
for(c=1;c<=r;c++)
{
printf("%c",s);
s++;
}
d=2;
s=s-d;
 for(c=r-1;c>=1;c--)
{
printf("%c",s);
s--;
}
d--;
}
if(r>5)
{
c=r;
while(5<c)
{
printf(" ");
c--;
}
s='A';
for(c=1;c<n-r;c++)
{
printf("%c",s);
s++;
}
for(c=n-r;c>=1;c--)
{
printf("%c",l);
l--;
}
l=l+n-r-1;
 }
printf("\n");
}
printf("ENTER N=10 OR 0 TO EXIT :");
scanf("%d",&n);
if(n==0)
exit();
goto tht;
getch();
exit(1);
}

case 33:
{
int r,c,n,m=5,d,j;
char s,l='D';
clrscr();
printf("ENTER THE N=10 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
thfo:
if(n==10)
for(r=1;r<=n;r++)
{
 if(r<=5)
 {
for(c=1;c<r;c++)
{
printf(" ");
}
s='A';
for(c=1;c<=m-r+1;c++)
{
printf("%d",c);
s++;
}
d=2;
s=s-d;
 for(c=m-r;c>=1;c--)
{
printf("%d",c);
s--;
}
d--;
}
if(r>5)
{
c=1;
while(c<=n-r)
{
printf(" ");
c++;
}
s='A';
for(c=1;c<r-m;c++)
{
printf("%d",c);
s++;
}
for(c=r-m;c>=1;c--)
{
printf("%d",c);
l--;
}
l=l+n-r-1;
}
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER O TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=10 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto thfo;
getch();
exit(1);
}

case 34:
{
int r,c,n,m=5,d,j;
char s,l='A';
clrscr();
printf("ENTER N=10 OR 0 ENTER TO EXIT :");
scanf("%d",&n);
if(n==0)
exit();
thif:
if(n==10)
for(r=1;r<=n;r++)
{
 if(r<=5)
 {
for(c=1;c<r;c++)
{
printf(" ");
}
s='A';
for(c=1;c<=m-r+1;c++)
{
printf("%c",s);
s++;
}
d=2;
s=s-d;
 for(c=m-r;c>=1;c--)
{
printf("%c",s);
s--;
}
d--;
}
if(r>5)
{
c=1;
while(c<=n-r)
{
printf(" ");
c++;
}
 s='A';
for(c=1;c<r-m;c++)
{
printf("%c",s);
s++;
}
for(c=r-m;c>=1;c--)
{
printf("%c",l);
l--;
}
l=l+r-m+1;
}
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=10 OR ENTER 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
exit();
goto thif;
getch();
exit(1);
}
case 35:

{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5 :");
scanf("%d",&n);
if(n==0)
{
exit();
}
thisi:
if(n==5)
{
for(r=1;r<=n;r++)
{
for(c=1;c<r;c++)
{
if(r==5)
{
break;
}
printf(" ");
}
for(c=1;c<=n-r+1;c++)
{
if(r==5)
break;
printf("%d",c);
}
for(c=n-r;c>=1;c--)
{
if(r==5)
break;
printf("%d",c);
}
if(r==5)
for(r=1;r<=n;r++)
{
 for(c=1;c<=n-r;c++)
 {
 printf(" ");
 }
 for(c=1;c<r;c++)
 {
 printf("%d",c);
 }
 for(c=r;c>=1;c--)
 {
 printf("%d",c);
 }
printf("\n");
}
printf("\n");
}
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=5 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto thisi;
 getch();
 exit(1);
}

case 36:
{
int r,c,n;
char s='A';
clrscr();
printf("ENTER THE INTEGER NUM 5: ");
scanf("%d",&n);
if(n==0)
exit();
thise:
if(n==5)
for(r=1;r<=n;r++)
{
s='A';
for(c=1;c<=r;c++)
{
if((r==2)||(r==4))
printf("%d",c);
else
printf("%c",s);
s++;
}
printf("\n");
if(r>=n)
printf("\n YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("IN VALID NUMBER ENTER N=5 OR ENTER 0 TO EXIT: ");
scanf("%d",&n);
if(n==0)
exit();
goto thise;
getch();
exit(1);
}

case 37:
{
int r,c,n;
char s;
clrscr();
printf("ENTER THE INTEGER NUM 5: ");
scanf("%d",&n);
if(n==0)
exit();
thiei:
if(n==5)
for(r=1;r<=n;r++)
{
s='E';
for(c=r;c<=n;c++)
{
printf("%c",s);
s--;
}
printf("\n");
if(r>=n)
printf("\n YOU GOT OUT PUT ENTER 0 TO EXIT :");
}
else
printf("IN VALID NUMBER ENTER N=5 OR ENTER O TO EXIT: ");
scanf("%d",&n);
if(n==0)
exit();
goto thiei;
getch();
exit(1);
}

case 38:
{
char r,c,n;
char l='D';
clrscr();
printf("ENTER THE ALPHABIT CAPITAL J: ");
scanf("%c",&n);
if(n=='J')
{
for(r='A';r<=n;r++)
{
for(c=r;c>='A';c--)
{
if(r>'E')
break;
printf("%c",c) ;
}
if(r>'E')
{
for(c=1;c<=n-r;c++)
{
printf("%c",l);
l--;
}
l=n-r+l-1;
 }
printf("\n");
}
}
else
{
printf("ENTER VALID ALPHABIT CAPITAL J : ");
}
getch();
exit(1);
}
case 39:
{
int r,c,n;
clrscr();
printf("ENTER THE INTEGER NUM 10: ");
scanf("%d",&n);
if(n==0)
{
exit();
}
fo:
if(n==10)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if(r>=5)
break;
printf("%d",c);
}
if(r>=5)
{
for(c=1;c<=n-r;c++)
{
printf("%d",c);
}
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT ENTER 0 TO EXIT: ");
}
}
}
else
printf("IN VALID NUMBER ENTER THE VALUE OF N=10 OR TO EXIT 0: ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fo;
getch();
exit(1);
}
case 40:
{
int r,c,n,j,s;
char so='A',l='F';
clrscr();
printf("FOR EXIT ENTER '0' ENTER NUMBER '6' TO VALID:\n");
scanf("%d",&n);

if(n==0)
{
exit();
}
fone:
if(n==6)
{
for(r=1;r<=n;r++)
{
j=r;
while(j>1)
{
printf(" ");
j--;
}
 so='A';
 for(c=1;c<=n-r+1;c++)
{
printf("%c",so);
so++;
}
for(c=n-r+1;1<=c;c--)
{
printf("%c",l);
l--;
}
l=n-r+l;
printf("\n");
}
}
else
printf("FOR EXIT ENTER '0' ENTER NUMBER '6' TO VALID:\n");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fone;
getch();
exit(1);
}
case 41:

{
int r,c,n,i=-1,s=9,j=1;
clrscr();
printf("ENTER THE VALUE OF N=5:");
scanf("%d",&n);
ftwo:
if(n==0)
{
exit();
}

if(n==5)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if((r==1)&&(c==1))
printf("%d",s);
else if((r==5)&&(c==1))
printf("%d",s);
else if ((r==5)&&(c>=2))
printf("%d",c-2);
else
printf("%d",i);
i++;
} j++;
printf("\n");
}
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=5 OR TO EXIT 0:");
scanf("%d",&n);
if(n==0)
{ exit();
}
goto ftwo;
getch();
exit(1);
}
case 42:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5,FOR EXIT N='0':  ");
scanf("%d",&n);
fthree:
if(n==0)
{
exit();
}
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1; c++)
{
printf("%d",c);
}
c=r;
while(c>1)
{
printf("  ");
 c--;
}
for(c=n-r+1;c>=1;c--)
{
printf("%d",c);
}
printf("\n");
if(r>=5)
{
printf(" YOU GOT OUT PUT ENTER NUMBER '0' FOR EXIT:\n  ");
}
}

else
printf("INVALID NUMBER ENTER '5'FOR VALID OR '0' FOR EXIT:\n  ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fthree;
printf("INVALID NUMBER '0' FOR EXIT:\n  ");
getch();
exit(1);
}
case 43:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5,FOR EXIT N='0':  ");
scanf("%d",&n);
ffour:
if(n==0)
{
exit();
}
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1; c++)
{
printf("*");
}
c=r;
while(c>1)
{
printf("  ");
 c--;
}
for(c=n-r+1;c>=1;c--)
{
printf("*",c);
}
printf("\n");
if(r>=5)
{
printf(" YOU GOT OUT PUT ENTER NUMBER '0' FOR EXIT:\n  ");
}
}

else
printf("INVALID NUMBER ENTER '5'FOR VALID OR '0' FOR EXIT:\n  ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto ffour;
printf("INVALID NUMBER '0' FOR EXIT:\n  ");
getch();
exit(1);
}
case 44:
{
int r,c,n,m,d;
clrscr();
printf("ENTER THE N VALUE IN BITWEEN 0 TO 10:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
d=1;
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%d",r);
}
 for(c=r-1;c>=1;c--)
{
printf("%d",r);
}

printf("\n");
} d++;
getch();
exit(1);
}

case 45:{
int r,c,n;
clrscr();
printf("ENTER THE N VALUE DEPENDS ON YOU:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%d",c);
}
 for(c=3;c<=r+1;c++)
{
printf("%d",r+c-2);
}
printf("\n");
}
getch();
exit(1);
 }

case 46:
{
int r,c,n;
clrscr();
printf("ENTER THE N VALUE DEPENDS ON YOU:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%d",c);
}
 for(c=3;c<=r+1;c++)
{
printf("%d",r+c-2);
}
printf("\n");
}
getch();
exit(1);
 }

case 47:
{
int r,c,n,s=0,l=1,v,d;
clrscr();
printf("ENTER NUMBER N=5 OR TO EXIT PRESS '0' : ");
scanf("%d",&n);
if(n==0)
{
exit();
}
feight:
if(n==5)
for(r=1;r<=n;r++)
{
for(c=n-r;c<=r+1;c++)
{
s=s+l;
printf("%3d",s);
s++;
}
printf("\n");
if(r>=5)
{
printf("\n");
printf("ENTER '0' TO EXIT : ");
}
}
else
printf("INVALID NUMBER ENTER N=5 OR TO EXIT ENTER '0': ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto feight;
getch();
exit(1);
}
case 48:

{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=7 OR 0 FOR EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
fnine:                                                       ;
if(n==7)
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if(r==n||c==1)
printf("*");
else if(r==c)
printf("*");
else
printf(" ");
}
printf("\n");
if(r>=7)
{
printf("\nYOU GOT OUT PUT FOR EXIT ENTER '0'\n :" );
}
}
else
printf("INVALID NUMBER ENTER N=6 FOR EXIT ENTER '0' :" );
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fnine;
getch();
exit(1);
}

case 49:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5,FOR EXIT N='0':  ");
scanf("%d",&n);
fifty:
if(n==0)
{
exit();
}
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1; c++)
{  if(r==5)
break;
printf("*");
}
c=r;
while(c>1)
{
if(c==5)
break;
printf("  ");
 c--;
}
for(c=n-r+1;c>=1;c--)
{
if(r==5)
break;
printf("*");
}
//printf("\n");
if(r==5)
{
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("*");
}
c=1;
while(c<n-r+1)
{
printf("  ");
 c++;
}
for(c=r;c>=1;c--)
{
printf("*");
}
printf("\n");
if(r>=5)
{
printf("\nYOU GOT OUT PUT ENTER '0' FOR EXIT:\n" );
}
}
}
printf("\n");
}
else
printf("INVALID NUMBER ENTER '5'FOR VALID OR '0' FOR EXIT:\n  ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fifty;
getch();
exit(1);
}

case 50:

{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5,FOR EXIT N='0':  ");
scanf("%d",&n);
fione:
if(n==0)
{
exit();
}
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1; c++)
{  if(r==5)
break;
printf("%d",c);
}
c=r;
while(c>1)
{
if(c==5)
break;
printf("  ");
 c--;
}
for(c=n-r+1;c>=1;c--)
{
if(r==5)
break;
printf("%d",c);
}
//printf("\n");
if(r==5)
{
if(n==5)
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",c);
}
c=1;
while(c<n-r+1)
{
printf("  ");
 c++;
}
for(c=r;c>=1;c--)
{
printf("%d",c);
}
printf("\n");
if(r>=5)
{
printf("\nYOU GOT OUT PUT ENTER '0' FOR EXIT:\n" );
}
}
}
printf("\n");
}
else
printf("INVALID NUMBER ENTER '5'FOR VALID OR '0' FOR EXIT:\n  ");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fione;
getch();
exit(1);
}

case 51:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=6 :");
scanf("%d",&n);
fitwo:
if(n==0)
{
exit();
}
if(n==6)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%2d",r);
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT  TO EXIT ENTER 0 :");
}
}
}
else
printf("INVALID NUMBER ENTER N=5 OR TO EXIT 0:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fitwo;
getch();
exit(1);
}
case 52:

{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=6 :");
scanf("%d",&n);
fithree:
if(n==0)
{
exit();
}
if(n==6)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
printf("%2d",c);
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT  TO EXIT ENTER 0 :");
}
}
}
else
printf("INVALID NUMBER ENTER N=5 OR TO EXIT 0:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fithree;
getch();
exit(1);
}

case 53:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=6 :");
scanf("%d",&n);
fifour:
if(n==0)
{
exit();
}
if(n==6)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r+1;c++)
{
printf(" ");
}
for(c=r;c>=1;c--)
{
printf(" %d",c);
}
printf("\n");
if(r>=n)
{
printf("YOU GOT OUT PUT OR TO EXIT 0 :");
}
}
}
else
printf("INVALID NUMBER ENTER N=5 OR TO EXIT 0:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fifour;
getch();
exit(1);
}

case 54:
{
int r,c,n;
clrscr();
printf("ENTER THE VALUE OF N=5 :");
scanf("%d",&n);
if(n==0)
{
exit();
}
fiftf:
if(n==5)
{
for(r=1;r<=n;r++)
{
for(c=1;c<r;c++)
{
if(r==5)
{
break;
}
printf(" ");
}
for(c=1;c<=n-r+1;c++)
{
if(r==5)
break;
printf("*");
}
for(c=n-r;c>=1;c--)
{
if(r==5)
break;
printf("*");
}
if(r==5)
for(r=1;r<=n;r++)
{
 for(c=1;c<=n-r;c++)
 {
 printf(" ");
 }
 for(c=1;c<r;c++)
 {
 printf("*");
 }
 for(c=r;c>=1;c--)
 {
 printf("*");
 }
printf("\n");
}
printf("\n");
}
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
else
printf("INVALID NUMBER ENTER N=5 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fiftf;
 getch();
 exit(1);
 }

case 55:
{
unsigned char r,c,n;
clrscr();
printf("ENTER THE VALUE N= 69 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
fifsix:
if(n==69)
{
for(r=65;r<=n;r++)
{
for(c=r;c>=65;c--)
{ if(r==69)
break;
printf("%c",c);
}
printf("\n");
if(r==68)
{
for(r=65;r<=n;r++)
{
for(c=n-r+65;c>=65;c--)
{
printf("%c",c);
}
printf("\n");
}
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
}
}
else
printf("INVALID NUMBER ENTER N=69 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fifsix;
getch();
exit(1);
return 0;
}
case 56:

{
int r,c,n,d;
clrscr();
printf("ENTER THE VALUE N=5 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
fifsev:
if(n==5)
{
for(r=1;r<=n;r++)
{
for(c=1;c<=n-r;c++)
{
printf(" ");
}
for(c=1;c<=r;c++)
{
if(c==r)
printf("%2d",c/r);
else if(c==1)
printf("%2d",c);
else if(c>2&&c<r-1)
printf("%2d",r+1);
else
printf("%2d",r-1);
}
printf("\n");
if(r>=n)
printf("YOU GOT OUT PUT ENTER 0 TO EXIT:");
}
}
else
printf("INVALID NUMBER ENTER N=5 OR 0 TO EXIT:");
scanf("%d",&n);
if(n==0)
{
exit();
}
goto fifsev;
getch();
exit(1);
}

case 57:
{
int r,c,n,m;
clrscr();
printf("enter the value n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
m=n;
c=1;
while(c<=r)
{
printf("%d",m);
m--;
c++;
}
 c=1;
while(c<=n-r)
{
printf("  ");
c++;
}
c=n-r+1;
while(c<=n)
{
printf("%d",c);
c++;
}
printf("\n");
}
getch();
exit(1);
}

default :

textmode(C40);
gotoxy(10,12);
printf("Invalid number");
}//switch
//printf("\nEnter the n value in between zero to 56 if you want see another patren:");
//printf("\nyou dont want see another patren simply enter zero:");
//scanf("%d",&h);
//if(h==0)
//exit();
//goto lvjss;
getch();
} //main