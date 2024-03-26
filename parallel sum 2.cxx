#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter a number : ");
	scanf ("%d",&n);
	
	printf("1+3+5..............+n %d",n);
	
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
		
	}
	
	printf("%d ",sum);
	return 0;
}