// C programme to print n namtural number in reverse using while loop

#include<stdio.h>

int main()
{
	int num, i;
	printf("enter the maximum integer number\n");
	scanf("%d", &num);
	
	i = num;
	printf("enter the maxmum integer value from %d to 1 are\n,", num);
	
	while(i>=1)
	{
		printf("%d\t",i);
		i--;
		
	}
	
	return 0;
}
