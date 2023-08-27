/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
swap(int *x ,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	
	printf("Enter numbers : ");
	scanf("%d%d", &a, &b);
	printf("\nBefore Swapping a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("\nAfter  Swapping a = %d, b = %d\n", a, b);
	return 0;
}