// c programe to check even and odd
#include<stdio.h>

int main()
{
	int a, b;
	printf("enter the number\n");
	scanf("%d", &a);
	
	if(a%2==0)
	{
		printf("%d is even\n", a);
	}
	else{
		printf("%d is an odd\n", a);
	}
	
	return 0;
}
