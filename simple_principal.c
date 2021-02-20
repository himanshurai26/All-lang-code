// modification in simple interest //

#include<stdio.h>

int main()
{
	int p, r, n;
    int si;
	p = 6;
	r = 7;
	n = 8 ;
	
	/* formula for simple interest */
	
   si = p * r * n / 100 ;
   
   printf("the value of simple interest is %d\n" , si);
   
   return 0;

	
}
