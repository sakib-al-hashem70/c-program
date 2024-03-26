#include<stdio.h>
int main()
{
	int n,first=0,second=1,count=0,fibo;
	printf("Enter the range= ");
	scanf("%d",&n);
	while(count<n)
	{
	     if(count<=1)
	     {
	     fibo=count;
	     }
	       else {
	     fibo=first+second;
	     first=second;
	     second=fibo;
	      }
	printf ("= %d\n",fibo);
	count++;
	}
	return 0;
}