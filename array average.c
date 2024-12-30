#include<stdio.h>
int main()
{
	int n;
	printf("enter array size ");
	scanf("%d",&n);
	int i,sum;
	float aver;
	int a[n];
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	aver=(float)sum/n;
	printf("average is %f",aver);
	
}
