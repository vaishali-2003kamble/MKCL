#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter row number :-");
	scanf("%d",&row);
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
