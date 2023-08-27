/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int n,i,a[20],max,min;
	
	printf("Enter number : ");
	scanf("%d", &n);
	printf("Enter array elements...\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("\nMin : %d",min);
	printf("\nMax : %d",max);
	return 0;
}