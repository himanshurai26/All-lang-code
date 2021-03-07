//  coding for for the loop 

#include<stdio.h>

int main()
{
	int num, i=0 ;
	
//	printf("enter the number\n");
//	scanf("%d", &num);
	
	for(i=0;i<=79; i++)
	{
		printf("enter the number %d\n",i+1);
		scanf("%d", &i);
		i = i + 1;
	}
	
	return 0;
}
