#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    int i,j,m,a[5][5],sum=0;

    printf("Enter order of matrix :\n");
    scanf("%d", &m);

    printf("\nEnter matrix elements:\n");

    for (i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nResultant matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<m; j++)
            if(i<=j)
                sum=sum+a[i][j];

    printf("\nSum of upper triangular elements: \t%d", sum);
    getch();
    return 0;
}
