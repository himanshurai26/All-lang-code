/* c programme to print natural numbers in reverse using for loop */

#include<stdio.h>

int main()
{
	int num, i;
	
	printf("enter the maximum integer value\n");
	scanf("%d", &num);
	
		printf("list of natural number from %d to 1 are\n", num);
	for(i=num; i>=1; i--)
	{
		printf("%d\t", i);
	}
	
	return 0;
	
}
