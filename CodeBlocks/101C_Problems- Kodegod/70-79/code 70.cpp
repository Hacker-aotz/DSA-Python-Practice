#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n, i, a[20], max, min;

    printf("Enter Number: ");
    scanf("%d", &n);
    printf("\nEnter array elements : \n" );
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }

         if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("\nMax : %d \n", max);
    printf("\nMin : %d \n", min);

        getch();
    return 0;
}
