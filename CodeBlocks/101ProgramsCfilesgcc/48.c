/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 

#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter number...");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		printf("Not Prime");
		return 0;
		exit(0);
		}
	}
	printf("Prime ");
	return 0;
}