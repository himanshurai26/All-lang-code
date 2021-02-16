/* learning of age */

#include<stdio.h>

int main()
{
	int name;
	
	printf("enter your name");
	scanf("%d", &name);
	
	switch (name)
	{ 
	   case 1:
	      printf("your name is himanshu");
	      
	   case 2:
	      printf("your name is himanshu rai");
		  
	   case 3:
	      printf("your name is raja");
		  
	   default:
	     printf("your name is not himanshu, himanshu rai or raja");	
		 break;    
	}
	
	return 0;
}
