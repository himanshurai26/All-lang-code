// printing  first n natural number 

#include<stdio.h>

int main()
{
	int num, i=1;
	
	printf("enter the number\n");
	scanf("%d", &num);
	
	printf("printing the number from 1 to %d\n", i);
	i =1 ;
	
	do
	{
		printf("%d\n", i);
		i = i + 1;
	}while(i<=num);
	
	return 0;
}
