#include<stdio.h>
int main()
{
	char gender;
	
	printf("enter gender(M/m or F/f)");
	scanf("%c",&gender);
	
	switch(gender)
	{
		case 'M':
		case 'm':	
			printf("Male");
			break;
			
			
		case 'F':
		case 'f':	
			printf("Female");
			break;
		
		default:
		printf("unspecifield gender");	
	
		
	}
	return 0;
		
}
