#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    int i,j,m,n,a[5][5];

    printf("Enter order of matrix :\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter matrix elements:\n");

    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTranspose matrix:\n");
    for(i=0; i<n; i++)
        {
            for(j=0;j<m;j++)
			printf("%d ",a[j][i]);
		printf("\n");
        }


    getch();
    return 0;
}

