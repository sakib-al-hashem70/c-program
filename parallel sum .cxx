#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter a number : ");
	scanf ("%d",&n);
	
	printf("1+2+3...............+n %d",n);
	
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i;
		
	}
	
	printf("%d ",sum);
	return 0;
}