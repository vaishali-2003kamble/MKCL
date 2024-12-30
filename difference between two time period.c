#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;	
};
void difference(struct time startime ,struct time stoptime ,struct time *differ);
int main()
{
	struct  time startime,stoptime,differ;
	printf("enter start time\n");
	printf("enter hour,min,sec :-");
	scanf("%d %d %d",&startime.hour,&startime.min,&startime.sec);
	printf("enter stop time\n");
	printf("enter hour,min,sec :-");
	scanf("%d %d %d",&stoptime.hour,&stoptime.min,&stoptime.sec);
	
	difference(startime,stoptime,&differ);
	printf("time difference %d: %d: %d - ",startime.hour,startime.min,startime.sec);
	printf("%d: %d: %d",stoptime.hour,stoptime.min,stoptime.sec);
	printf("= %d: %d :%d\n",differ.hour,differ.min,differ.sec);
	return 0;
		
}
void difference(struct time start,struct time stop ,struct time *differ)
{
	while(stop.sec>start.sec)
	{
		--start.min;
		start.sec+=60;
	}
	differ->sec=start.sec-stop.sec;
	while(stop.min>start.min)
	{
		--start.hour;
		start.min+=60;
	}
	differ->min=start.min-stop.min;
	differ->hour=start.hour-stop.hour;
	
	
	
	
}








