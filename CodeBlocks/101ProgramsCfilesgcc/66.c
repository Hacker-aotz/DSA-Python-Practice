/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int n,i,a[20];

	printf("Enter number...");
	scanf("%d", &n);
	printf("Enter array elements :\n" );
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
		printf("\nElement %d : %d",i+1,a[i]);
	return 0;
}
