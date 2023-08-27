#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i, n, sum = 0, n1;
	float avg = 0;

	printf("Enter Amount Number: ");

	scanf("%d" , &n);

	printf("\nEnter Each Number: ");

	for(i=1; i<=n; i++)
		  {
		      scanf("%d" , &n1);

		  sum = sum + n1;
		  }
		  avg = sum / (float)n;

	printf("\nAverage: %f", avg);
	getch();

	return 0;
}
