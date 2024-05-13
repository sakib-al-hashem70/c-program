#include <stdio.h>
int main()
{
	int i,num[100],n,max,min;
	printf("enter any numbers:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num[i]);
	}
		max=num[0];
		
		for (i=1;i<n;i++)
		{
			if(max<num[i])
			max=num[i];
		}
		 
		{
			 printf("Maximum number is : %d\n",max);
			 
		 }
		  
	return 0;
}