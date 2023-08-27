#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n,i,a[20];

    printf("Enter Numbers: ");
    scanf("%d", &n);
    printf("Enter array elements : \n" );
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
        printf("\nElement %d : %d", i+1, a[i]);

    getch();
    return 0;
}

