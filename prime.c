# cs1
#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,flag=0;
 printf("\nEnter the number: ");
 scanf("%d",&num);
 for(i=2;i<=num/2;i++)
 {
  if(num%2==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
  printf("\n%d is prime",num);
 else
  printf("\n%d is not prime",num);
}
