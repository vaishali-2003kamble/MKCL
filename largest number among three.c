#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter three number :- ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3)
	{
		printf("first number is large %d",n1);
	}
	else if(n2>=n1 && n2>=n3)
	{
		printf("second number is large %d",n2);
	}
	else
	{
		printf("third number is large %d",n3);
	}
}
