/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
 
int main()
{
    int n,i,a[20],j,temp;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter array elements...\n");
 
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
 
    printf("\nAscending order....\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
 
    printf("\nDescending order.....\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}