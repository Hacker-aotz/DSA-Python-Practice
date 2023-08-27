#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    int i,j,m,n,k,a[5][5],b[5][5],c[5][5];

    printf("Enter order of matrix :\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter matrix elements of first matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter matrix elements of second matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=0;
            for(k=0; k<n; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    printf("\nResultant matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}

