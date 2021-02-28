#include<stdio.h>

int main()
{
	int marks;
	
	printf("enter your marks\n");
	scanf("%d\n", &marks);
	
	switch(marks)
	{
		case 90 &&100:
			printf("student grade is A\n");
			
		case 80 &&90:
			printf("student grade is B\n");
		
		case 70 &&80:
			printf("student grade is C\n");
		
		case 60 &&70:
			printf("student grade is D\n");
			
		default:
		   printf("student grade is f\n");	
						
		}
	return 0;
}
