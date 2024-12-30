#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	float *d;
	int i;
	printf("enter  number of term ");
	scanf("%d",&n);
	d=(float *)calloc(n,sizeof(float));
	
	if(d==NULL)
		{
			printf("error memory is not allocate");
			exit(0);
		}
	for(i=0;i<n;i++)
	{
		scanf("%f",d+1);
	}
	for(i=1;i<n;i++)
	{
		if(*d<*(d+i))
		{
			*d=*(d+i);	
		}	
	}
	printf("largest number %f",*d);
	free(d);
	return 0;
	
}
