#include<stdio.h>
#define pi 3.14
int main()
{
	int radius;
	float area;
	printf("enter radius ");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("area of a circle is %f ",area);
}
