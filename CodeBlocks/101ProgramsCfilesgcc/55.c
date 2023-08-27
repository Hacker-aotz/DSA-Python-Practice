/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1;i<=80;i++)
		printf("*");
	for(i=2;i<=23;i++)
	{
		printf("*");
		for(j=2;j<=79;j++)
			printf(" ");
		printf("*");
	}
	for(i=1;i<=80;i++)
		printf("*");

	return 0;

}