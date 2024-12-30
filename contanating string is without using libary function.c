#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200];
	char str2[200];
	int i=0,j=0;
	printf("enter string 1 :- ");
	gets(str1);
	printf("enter string 2 :- ");
	gets(str2);
	while(str1[i]!='\0')
		i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;	
	}
	str1[i]='\0';
	printf("contanating string is %s",str1);
}

