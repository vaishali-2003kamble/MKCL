#include<stdio.h>
float one(int,int);
float two(int,int);
float three(int,int);	
float four(int,int);
int main()
{
	float(*ptr[4])(int ,int);
	float a,b,c,d;
	ptr[0]=one;
	ptr[1]=two;
	ptr[2]=three;		
	ptr[3]=four;

	a =ptr[0](1,2);
	b =ptr[1](3,4);
	c =ptr[2](5,6);		
	d =ptr[3](7,8);
	printf("a:%f\tb:%f\n",a,b);
	printf("c:%f\td:%f\n",c,d);
	return 0;	
}
float one(int m,int n)
{
	float r;
	r=(float)m/n;
	return r;
}
float two(int i ,int j) 
{
	float f;
	f=(float)i/j;
	return f;
}
float three(int x ,int y)
{
	float v;
	v=(float)x/y;
	return v;
}
float four(int p ,int q)
{
	float b ;
	b=(float)p/q;
	return b;
}











