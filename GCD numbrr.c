#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two number");
	scanf("%d%d",&num1,&num2);
	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;
		}
		else
		{num2=num2-num1;
		}
	}
	printf("the GCD of num1 and num2 is %d\n",num2);
}
