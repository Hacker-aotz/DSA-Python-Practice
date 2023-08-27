#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i, j, n;
	float sum = 0, fact = 1;

	printf("Enter Series No: ");

	scanf("%d" , &n);

	for(i=1; i<=n; i++)
		  {
		      for(j=1; j<=i+1; j++)
		  {
		      fact = fact * i;
		  }
		  sum = sum + i / fact;
		  }

	printf("\nSum of Series: %f", sum);
	getch();

	return 0;
}
