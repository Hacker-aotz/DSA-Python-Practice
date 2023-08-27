/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
int fact(int n)
{
	int f;
	if(n==1)
		return 1;
	else
		f=n*fact(n-1);
	return f;
}

int main()
{
	int n;
	
	printf("Enter number : ");
	scanf("%d", &n);
	printf("\nFactorial is...%d\n", fact(n));
	return 0;
}