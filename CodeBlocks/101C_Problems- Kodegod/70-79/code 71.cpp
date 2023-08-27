#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n, i, a[20];

    printf("Enter Number: ");
    scanf("%d", &n);
    printf("\nEnter array elements : \n" );
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n\nPositive Elements : \n");
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            printf("%d ", a[i]);
        }

    }
        printf("\n\nNegative Elements : \n");

         for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            printf("%d ", a[i]);
        }

    }


        getch();
    return 0;
}
