#include<stdio.h>
int main()
{
	int i,n;
	unsigned long long fact=1;
	printf("enter the positive number");
	scanf("%d",&n);
	if(n<0)
		printf("factorial number are negative");
	
	else
	{
	int i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}

	printf("factorial of %d= %llu",n,fact);
	}
	
}
