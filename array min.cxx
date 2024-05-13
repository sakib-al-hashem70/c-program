#include <stdio.h>
int main()
{
	int i,num[100],n,min;
	printf("enter any numbers:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num[i]);
	}
		min=num[0];
		
		for (i=1;i<n;i++)
		{
			if(min>num[i])
			min=num[i];
		}
		 
		{
			 printf("Minimum number is : %d\n",min);
			 
		 }
		  
	return 0;
}