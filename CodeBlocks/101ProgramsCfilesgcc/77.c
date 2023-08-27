/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 

#include<stdio.h>

int main()
{
	int i,j,m,a[5][5],sum=0;
	
	printf("Enter order of matrix :\n");
	scanf("%d", &m);
	printf("Enter matrix elements.....\n");
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
 
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(i<j)
				sum=sum+a[i][j];
 
	printf("\nSum of upper triangular elements.....%d", sum);
	return 0;
}