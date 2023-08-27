#include<stdio.h>
#include<math.h>
#include<conio.h>

int square(int x)
{
	return(pow (x,2));
}

int cube(int x)
{
	return(pow(x,3));
}
int main()
{
	int n;

	printf("Enter Numbers: \n");
	scanf("%d", &n);
	printf("\nSquare : %d\n",square(n));
	printf("\nCube   : %d\n",cube(n));
	cube(n);

	getch();
    return 0;
}
