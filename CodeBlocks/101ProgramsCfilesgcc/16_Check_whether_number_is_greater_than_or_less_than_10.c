/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
  int n;
  
  printf("enter number...");
  scanf("%d",&n);
  if(n>10)
	printf("Number is greater than 10");
  else if(n<10)
	printf("Number is lesser than 10");
  else
	printf("Number is 10");
  return 0;
}