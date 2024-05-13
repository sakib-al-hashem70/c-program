#include <stdio.h>
int main()
{
	int sum=0,c,a[10];
	printf("enter 10 numbers:  ");
	for(c=0;c<10;c++)
	{
	scanf("%d",&a[c]);
	}
		for (c=0;c<10;c++)
		{
			sum=sum+a[c];
		}
		{
	  printf("the sum is : %d\n",sum);
      printf("the avarage number : %.2f\n",(float)sum/10);
	}
	return 0;
}