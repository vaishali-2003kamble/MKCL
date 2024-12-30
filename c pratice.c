#include<stdio.h>
int main()
{
	int n,dig,occer;
	printf("enter number :- ");
	scanf("%d",&n);
	printf("enter digits if we want to find the occerence ");
	scanf("%d",&dig);
	int i,j;
	while(n!=0)
	{
		j=n%10;
		n=n/10;
		if(j==dig)
	{
		i++;
	}
	}

	printf("%d number and its occrence is %d",dig,i);
	return 0;
}
