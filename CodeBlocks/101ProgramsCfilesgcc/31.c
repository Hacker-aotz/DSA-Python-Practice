/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
  int temp,rem,sum=0,n;
  
  printf("Enter n : ");
  scanf("%d", &n);
  temp=n;
  while(n > 0)
  {
	   rem=n%10;
	   sum=sum+rem*rem*rem;
	   n=n/10;
  }
  if(temp==sum)
		printf("Armstrong Number");
  else
		printf("Not an Armstrong Number");
  return 0;
}