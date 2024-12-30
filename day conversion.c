
#include<stdio.h>
int main()
{
	int day,week,year;
	
	printf("enter the day");
	scanf("%d",&day);
	
	year=day/365;
	week=(day-(year*365))/7;
	day=day-((year*365)+(week*7));
	
	printf("the day in year %d\n",year);
	printf(" the day in week %d\n",week);
	printf("the day in day%d\n",day);

	return 0;	
	
}
