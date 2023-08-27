#include<stdio.h>

int main()
{
	int i, j;

	for(i=1;i<=40;i++)
		  {
		      printf("*");
		  }

	for(i=2;i<=23;i++)
		  {
		      for(j=2;j<=39;j++)
		  {
		      printf(" ");
		  }
		      printf("*");
		  }

	for(i=1;i<=40;i++)
		  {
		      printf("*");
		  }



	return 0;
}
