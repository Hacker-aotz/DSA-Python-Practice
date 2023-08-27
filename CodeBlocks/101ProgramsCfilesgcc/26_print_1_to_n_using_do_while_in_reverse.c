/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
  int i=1,n;
  
  printf("Enter n : ");
  scanf("%d",&n);
  i=n;
  do
  {
	   printf("%d\t",i);
	   i--;
  }while(i>=1);
  return 0;
}