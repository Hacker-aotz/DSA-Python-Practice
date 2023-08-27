#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n, i, a[20], sum = 0;

    printf("Enter Numbers: ");
    scanf("%d", &n);
    printf("\nEnter array elements : \n" );

    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
        printf("\nSum of Elements : %d", sum);

    getch();
    return 0;
}


