/* caculation of simple interest */

/* Author himanshu date-31-01-2021 */
#include<stdio.h>

int main()
{
	int p, n, r;
	
   float si;
   
   p = 56;
   n = 36;
   r = 33;
   
   /*formula for simple interest */
   
   si = p * n * r / 100;
   
   printf("%f\n , si");
   
   return 0;
}
