/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int n,rem,a,b;
	char op;
	
	printf("Enter Operator(+,-,*,/)...");
	scanf("%c",&op);
	printf("Enter numbers...");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+' : printf("Result : %d ",a+b);break;
		case '-' : printf("Result : %d ",a-b);break;
		case '*' : printf("Result : %d ",a*b);break;
		case '/' : printf("Result : %d ",a/b);break;
		default  : printf("Invalid operator....");
	}
	return 0;
}