/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
int add(int x,int y)
{
	return(x+y);
}
 
int sub(int x,int y)
{
	return(x-y);
}
 
int mul(int x,int y)
{
	return(x*y);
}
 
int div(int x,int y)
{
	return(x/y);
}
 
int main()
{
	int a,b;
	
	printf("Enter numbers : \n");
	scanf("%d%d", &a, &b);
	printf("\nAddition       : %d\n", add(a, b));
	printf("\nSubtraction    : %d\n", sub(a, b));
	printf("\nMultiplication : %d\n", mul(a, b));
	printf("\nDivision       : %d\n", div(a, b));
	
	return 0;
}