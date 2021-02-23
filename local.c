/* local value to main */
#include<stdio.h>
int lv();
void main()
{
	int num;
	printf("enter the value = ");
	num = lv();
	printf("you have enterd %d", num);
}

int lv()
{
	int lc;
	scanf("%d", &lc);
	return lc*lc;
}
