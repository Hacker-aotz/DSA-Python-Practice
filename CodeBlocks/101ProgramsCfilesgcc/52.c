/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 

#include<stdio.h>

int main()
{
	int i,j,n;
	float sum=0,fact=1;
	
	printf("Enter number....");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i+1;j++)
			fact=fact*j;
	sum=sum+i/fact;
	}
	printf("Sum of the series....%f",sum);
	return 0;
}