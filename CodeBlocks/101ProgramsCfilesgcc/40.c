/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,j,k,n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=(n-i);k++)
			{
			 printf(" ");
			}
		for(j=1;j<=i;j++)
			{
			 printf("*");
			}
		for(j=2;j<=i;j++)
			{
			 printf("*");
	}

		printf("\n");
	}
	return 0;
}