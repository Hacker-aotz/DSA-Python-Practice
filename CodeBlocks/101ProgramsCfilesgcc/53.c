/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int n,i,newn,sum_avg=0,sum_sd=0;
	float sd,avg;
	
	printf("Enter number : ");
	scanf("%d",&n);
	printf("Enter numbers...");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&newn);
		sum_avg=sum_avg+newn;
		sum_sd=sum_sd+(newn*newn);
	}
	avg=sum_avg/(float)n; //Type casting.
	sd=sum_sd/(float)(n*n);//Type casting
	printf("\nAverage = %f",avg);
	printf("\nStandard Deviation = %f",sd);
	return 0;
}