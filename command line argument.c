#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("\n name of my program %s \t",argv[0]);
	/*if(argc==2)
	{
		printf("\n value given by the user %s \t",argv[1]);
	}*/
	if(argc<2)
	{
		printf("\n no argument passed through command line\n ");
	}
	else
	{
		printf("\n first argument is %s \n",argv[1]);
	}
}
