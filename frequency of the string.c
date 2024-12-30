#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],ch;
	int count=0,i;
	printf("enter string name ");
	fgets(str,sizeof(str),stdin);
	printf("enter a character to find the freqency ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(ch==str[i])
		{
			count++;
		}	
	}
	printf("freqency of %c is %d",ch,count);
	return 0;
}
