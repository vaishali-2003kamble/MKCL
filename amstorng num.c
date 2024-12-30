#include<stdio.h>
int main()
{
	int n,r,b=0,t;
	printf("enter number :-");
	scanf("%d",&t);
	n=t;
	while(n!=0)
	{
		r=n%10;
		b=b+r*r*r;
		n=n/10;
	}
	
	if(b==t)
	printf("%d is amstrong number ",t);
	else
	printf("%d is Not amstrong number ",t);
}
