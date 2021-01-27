/* calculation of simple interest */
/* author himanshu kumar date 27-01-2021 */

#include<stdio.h>

int main()
{
	int p, n, r;
	float si;
	p = 14;
	n = 5; 
	r = 8;
	
	/* formula for simple interest */
     si = p * n * r / 100 ;
	
	printf("%f\n" , si );
	
	return 0;
	
	
}
