/* 
Programs by kodegod.com 
For more visit... 
https://YouTube.com/kodegod 
https://Instagram.com/kodegod 
*/ 
#include<stdio.h>

fibbo(int pre, int cur ,int x)
{        
	int temp;
	if(x==2)
	{
		return 0;
		exit(0);
	}
	temp=cur;
	cur=pre+cur;
	pre=temp;
	printf("%d ",cur);
	fibbo(pre,cur,x-1);
}

int main()
{
	int n,pre=1,cur=1;
	
	printf("Enter number : ");
	scanf("%d", &n);
	printf("%d %d ", pre, cur);
	fibbo(pre, cur, n);
	return 0;
}