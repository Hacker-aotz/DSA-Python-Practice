#include<stdio.h>
#include<math.h>
#include<conio.h>

int add(int x,int y)
{
	return(x+y);
}

int sub(int x,int y)
{
	return(x-y);
}

int mul(int x,int y)
{
	return(x*y);
}

int div(int x,int y)
{
	return(x/y);
}

int main ()
{
    int a,b;

    printf("Enter Numbers: \n");
    scanf("%d%d", &a,&b);

    printf("\n Addition: %d\n", add(a,b));
    printf("\n Substitution: %d\n", sub(a,b));
    printf("\n Multiplication: %d\n", mul(a,b));
    printf("\n Division: %d\n", div(a,b));

    getch();
    return 0;
}
