#include<stdio.h>

int main()
{
	int age; 
	printf("enter your age\n");
	scanf("%d", &age);
	
	switch (age)
	{
		case 1:
			printf("the age is 3\n");
			
		case 13:
		    printf("the age is 13\n");
			
		case23:
			printf("the age is 23\n");
			break;
		
		default:
		printf("the age is not 3, 13 or 23");		    		
			
	    		
			
	}
	
	
    return 0;
}
