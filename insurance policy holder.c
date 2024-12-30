#include<stdio.h>
#include<string.h>
#include<stdarg.h>
#define max 2
int main()
{
	enum sex{male,female};
	enum level{major,minor};
	typedef struct people
	{
		enum sex gender;
		enum level agelevel;
		char policyname[10];
		unsigned int durainyear;
	}people;
	people p[max];
	int i,pol;
	for(i=0;i<max;i++)
	{
		printf("enter gender(male=0 female=1) ");
		scanf("%d",&pol);
		pol?(p[i].gender=female):(p[i].gender=male);
		printf("enter age status (male=0 female=1) ");
		scanf("%d",&pol);
		pol?(p[i].agelevel=minor):(p[i].agelevel=major);
		while(getchar()!='\n')
		printf("enter name of customer");
		gets(p[i].policyname);
		printf("duration of year ");
		scanf("%d",&p[i].durainyear);	
	}
	system("cls");
	for(i=0;i<max;i++)
	{
		printf("\n%d\t%d",p[i].gender,p[i].agelevel);
		printf("\t%s\t%d",p[i].policyname,p[i].durainyear);

	}
	
	_getch();
	return 0;
	
}
