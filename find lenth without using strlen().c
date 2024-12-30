#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	printf("enter string name ");
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++);
	printf(" string length is  %d",i);
	return 0;
}
