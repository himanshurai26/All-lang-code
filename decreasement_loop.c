// code for decreasing for loop

#include<stdio.h>

int main()
{
	int i;
	
	for(i=0; i<99 ; i++)
	{
		printf("%d\n", i);
		
		if( i==77)
		{
			break;
		}
		
	}
	
	return 0;
}
