#include<stdio.h>
int main()
{
	int n,i,odd=0,even=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     if(i%2==0)
	     even =even+i;
	     else 
	     odd=odd+i;
	}
	printf("sum = %d\n",odd-even);
	return 0;
} 