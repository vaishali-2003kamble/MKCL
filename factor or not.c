#include<stdio.h>
int main()
{
	int n,i;
	
	printf("enter positive number:");
	scanf("%d",&n);
	
	printf("factors of %d are:\n",n);
	for(i =1; i<=n;++i)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}	
			
	}
	
	
	
	
}
