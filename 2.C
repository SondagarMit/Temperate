#include<stdio.h>
#include<conio.h>
void main()
{
 int number,i;

 clrscr();

 printf("Enter Your Any Number = ");
 scanf("%d",&number);

 // loop start
 for (i=1;i<=10;i++)
 {
  printf("%d * %d =%d\n",number,i,number*i);

 }


 getch();


}
