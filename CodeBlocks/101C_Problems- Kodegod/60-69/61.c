#include<stdio.h>
#include<math.h>
#include<conio.h>

fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact=fact*i;
	printf("\nFactorial is : %d\n", fact);
}

IsPrime(int x)
{
	int i;
	for(i=2;i<x-1;i++)
	{
		if(x%i==0)
		{
			printf("Not a Prime Number\n");
			return 0;
		}
	}
	printf("It is a Prime number\n");
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

	printf("Enter Numbers: \n");
	scanf("%d", &n);
	fact(n);
	IsPrime(n);
	fibbo(n);

	getch();
    return 0;
}
