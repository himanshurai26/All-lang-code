// if else condition in loop 

#include<stdio.h>

int main()
{
	int skip = 5;
	int i = 0;
	
	while(i<10)
	{
		if(i!= skip)
		 continue;
	else
	  printf("%d" , i);	 
	}
}
