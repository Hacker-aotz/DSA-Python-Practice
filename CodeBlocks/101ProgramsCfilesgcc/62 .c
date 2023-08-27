/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
int square(int x)
{
	return(x*x);
}
 
int cube(int x)
{
	return(x*x*x);
}
int main()
{
	int n;
	
	printf("Enter number.....");
	scanf("%d", &n);
	printf("\nSquare : %d\n",square(n));
	printf("\nCube   : %d\n",cube(n));
	cube(n);
	return 0;
}