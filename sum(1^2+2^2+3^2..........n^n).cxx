 #include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number : ");
	scanf ("%d",&n);
     
    for(i=1; i<=n; i=i+1)
	{
		 
	sum=sum+i*i;
	
	}
	printf(" %d ",sum);
	return 0;
}