#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n, i, a[20], j, max , min, temp ;

    printf("Enter Number: ");
    scanf("%d", &n);
    printf("\nEnter array elements : \n" );
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    }
    printf("\n\nAscending Order of Elements : \n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }

        min = a[0];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        if(a[i]<a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    }

    printf("\n\nDescending Order of Elements : \n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }

        getch();
    return 0;
}

