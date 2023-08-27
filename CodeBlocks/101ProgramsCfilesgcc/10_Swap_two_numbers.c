/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
 int a,b,temp;
 
 printf("Enter Numbers: ");
 scanf("%d%d",&a,&b);
 printf("\nBefore Swapping..\na=%d,b=%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\nAfter Swapping..\na=%d,b=%d",a,b);
 return 0;
}