#include<stdio.h>
int fact(int);
int main()
{
	int n,s;
	printf("enter positive number ");
	scanf("%d",&n);
	s=fact(n);
	printf("factorial of %d  is %d",n,s);
}
int fact(int n)
{	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
