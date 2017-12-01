# cs1
#include<stdio.h>
#include<conio.h>
void main()
{
 int firstnum,lastnum,i;
 printf("\nEnter the first number:");
 scanf("%d",&firstnum);
 printf("\nEnter the last number:");
 scanf("%d",&lastnum);
 for(i=firstnum;i<lastnum;++i)
 {
  if(i%2!=0)
  {
   printf("\n%d",i);
  }
 }
}
