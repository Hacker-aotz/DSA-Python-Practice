/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 

#include<stdio.h>

int main()
{
	int i,j,m,n,a[5][5],sum=0;
	
	printf("Enter order of matrix :\n");
	scanf("%d%d", &m, &n);
	printf("Enter matrix elements.....\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
 
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			sum=sum+a[i][j];
 
	printf("\nSum of matrix elements.....%d", sum);
	return 0;
}