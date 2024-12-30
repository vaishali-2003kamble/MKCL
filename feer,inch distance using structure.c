#include<stdio.h>
struct distance
{
	int feet;
	float inch;
}d1,d2,res;
int main()
{
	printf("enter distance 1 :- ");
	printf("enter feet :- ");
	scanf("%d",&d1.feet);
	printf("enter inches :- ");
	scanf("%f",&d1.inch);
	printf("enter distance 2 :- ");
	printf("enter feet :- ");
	scanf("%d",&d2.feet);
	printf("enter inches :- ");
	scanf("%f",&d2.inch);
	res.feet=d1.feet+d2.feet;
	res.inch=d1.inch+d2.inch;
	while(res.inch>=12)
	{
		res.inch=res.inch-12.0;
		res.feet++;
	}
	printf("sum of distance = %d \'-%.1f\"",res.feet,res.inch);
		
}
