/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact=fact*i;
	printf("Factorial is : %d", fact);
}
 
IsPrime(int x)
{
	int i;
	for(i=2;i<x-1;i++)
	{
		if(x%i==0)
		{
			printf("\nNot a Prime Number\n");
			return 0;
		}
	}
	printf("\nIt is a Prime number\n");
}
 
fibbo(int x)
{
	int pre=1,cur=1,i,temp;
	printf("%d %d", pre, cur);
	for(i=3;i<=x;i++)
	{
		temp=cur;
		cur=pre+cur;
		pre=temp;
		printf(" %d", cur);
	}
}
int main()
{
	int n;
	
	printf("Enter number...");
	scanf("%d", &n);
	fact(n);
	IsPrime(n);
	fibbo(n);
	return 0;
}
