/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,fact=1,n;
	
	printf("Enter number...");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("facttorialof the given number is...%d",fact);
	return 0;

}