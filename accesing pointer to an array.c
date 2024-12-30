#include<stdio.h>
int main()
{
	int n;
	printf("enter array size ");
	scanf("%d",&n);
	int i,a[n];
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p=a;
	printf("accesing array element are ");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,*(p+i));	
	}

	return 0;	
}
