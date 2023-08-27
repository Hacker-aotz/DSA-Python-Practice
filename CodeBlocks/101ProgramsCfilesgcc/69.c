/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int a[20], n, i;
	
	printf("Enter number : ");
	scanf("%d", &n);
	a[1]=a[2]=1;
 
	for(i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
 
	for(i=1;i<=n;i++)
		printf(" %d", a[i]);
 
	return 0;
}