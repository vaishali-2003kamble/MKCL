#include <stdio.h>
int main()
{
	int n;
	int count=0;
	
	printf("enter number:");
	scanf("%d",&n);
	do{
		n=n/10;
		++count;
		
	}while(n!=0);
	printf("number of digits=%d",count);
	
}
