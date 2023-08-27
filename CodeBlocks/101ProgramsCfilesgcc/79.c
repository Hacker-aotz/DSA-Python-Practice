/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

int main()
{
	int i,j,m,n,k,a[5][5],b[5][5],c[5][5];
	
	printf("Enter order of matrix :\n");
	scanf("%d%d", &m, &n);
	printf("Enter matrix elements of first matrix.....\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
 
	printf("Enter matrix elements of second matrix.....\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &b[i][j]);
 
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
 
	printf("Resultant matrix .....\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}