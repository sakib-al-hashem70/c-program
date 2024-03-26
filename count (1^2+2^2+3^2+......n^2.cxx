#include<stdio.h>
int main()
{
	int n,i,result=1;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     result=result*i*2;
	}
	printf(" = %d",result);
	return 0;
} 