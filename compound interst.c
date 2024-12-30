#include<stdio.h>
#include<math.h>
int main()
{
	int P,T;
	float R,CI;
	
	printf("enter the principal amount=");
	scanf("%d",&P);
	
	printf("enter the time=");
	scanf("%d",&T);
	
	printf("enter the rate=");
	scanf("%f",&R);
	
	CI=P*(pow((1+R/100),T));

	printf("the compound interset is =%f",CI);
	
}
