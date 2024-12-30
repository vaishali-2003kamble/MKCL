#include<stdio.h>
int main()
{
	int n;
	printf("enter array size ");
	scanf("%d",&n);
	int i,lar;
	int a[n];
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	printf("largest number is %d",lar);
	
}
