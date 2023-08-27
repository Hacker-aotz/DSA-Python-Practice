#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	char op;

	printf("Enter Operator (+,-,*,/): ");
	scanf("%c",&op);
	printf("Enter numbers: ");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+' : printf("Result : %d ",a+b);break;
		case '-' : printf("Result : %d ",a-b);break;
		case '*' : printf("Result : %d ",a*b);break;
		case '/' : printf("Result : %d ",a/b);break;
		default  : printf("Invalid operator....");
	}
	getch ();
	return 0;
}
