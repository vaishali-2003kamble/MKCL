#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter opertor(+ - / * %)");
	scanf("%c",&op);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':
			printf("%d +%d =%d",a,b,a+b);
			break;
			
			
		case '-':
			printf("%d -%d =%d",a,b,a-b);
			break;
			
		case '*':
			printf("%d * %d =%d",a,b,a*b);
			break;
		
		case '/':
			printf("%d /%d =%d",a,b,a/b);
			break;
			
		case '%':
			printf("%d modulo %d =%d",a,b,a%b);
			break;	
			
		default :
			printf("incorroect opertor");
			break;
		}

	
}
