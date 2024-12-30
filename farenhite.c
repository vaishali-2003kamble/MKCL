#include<stdio.h>
int main()
{
	float fahrenhite, celcius;
	
	printf("enter the fahrenhite value:");
	scanf("%f",&fahrenhite);
	
	celcius=(fahrenhite-32)*5/9;
	printf("the celcius value=%f",celcius);
	
	return 0;	
	
}
