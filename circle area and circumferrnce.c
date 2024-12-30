#include<stdio.h>
int main()
{
	float area,circumfrerece,r,pi=3.14;
	printf("enter radius :- ");
	scanf("%f",&r);
	area=pi*r*r;
	circumfrerece=2*pi*r;
	printf("area of circle :- %f \n",area);
	printf("circumfrernce of the circle :- %f ",circumfrerece);
}
