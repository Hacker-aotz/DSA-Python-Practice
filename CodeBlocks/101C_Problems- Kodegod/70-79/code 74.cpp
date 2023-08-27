#include<stdio.h>
#include<conio.h>
#include<math.h>

main ()
{
    int i, j, m, n, a[5][5], b[5][5], c[5][5];

	printf("Enter Order of Matrix :\n");
	scanf("%d%d", &m, &n);


printf("Enter matrix elements of First Matrix: \n");
	for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
			{
			    scanf("%d", &a[i][j]);
			}
		}

		printf("Enter matrix elements of Second Matrix: \n");
	for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
			{
			    scanf("%d", &b[i][j]);
			}
		}

		for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
			c[i][j] = a[i][j] + b[i][j];
		}

		printf("\nResult Matrix : \n");
		for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
			printf("%d ", c[i][j]);
			    printf("\n");
		}

    getch();
    return 0;
}

