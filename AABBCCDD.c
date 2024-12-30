#include<stdio.h>
int main()
{
	int i,j,row,c='A';
	printf("enter  last character to print :-");
	scanf("%c",&row);
	for(i=1;i<=(row-'A'+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",c);
		}
	
		c++;
			printf("\n");
	}
	return 0;
}
