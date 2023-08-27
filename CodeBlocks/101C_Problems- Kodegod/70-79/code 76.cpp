#include<stdio.h>
#include<conio.h>
#include<math.h>

main ()
{
    int i, j, m, a[5][5], sum=0;

	printf("Enter Order of Matrix :\n");
	scanf("%d", &m);
	printf("\nEnter Matrix Elements: \n");

	for(i=0;i<m;i++)
		{
		    for(j=0;j<m;j++)
			{
			    scanf("%d", &a[i][j]);
			}
		}


		for(i=0;i<m;i++)
		{
		    for(j=0;j<m;j++)
            {
                if(i == j)
			    sum = sum + a[i][j];
            }


		}


		printf("\nSum of Diagonal Matrix Elements:\n%d", sum);

    getch();
    return 0;
}

