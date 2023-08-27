/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>
int main()
{
    int i=1,n,counter=2;
    printf("Enter n : ");
    scanf("%d",&n);
 
    while(i<=n)
    {
        printf("%d\t",counter);
        counter=counter+2;
        i++;
    }
    return 0;
}