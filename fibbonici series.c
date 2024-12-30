#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c=0;
	printf("enter positive number of term :-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("%d ",c);
		a=b;
		b=c;
		c=a+b;	
	}
}
