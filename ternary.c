/* 
ternary operator ( (condition) ? statement1 : statement2 )
if(condition)
{statement1;}
else
{statement2}
*/

#include<stdio.h>
void main()
{
	int number;
	int remain;
	printf("enter the number = ");
	scanf("%d", &number);
	remain =number %2;
	(remain == 0? pritf("entered number %d is an even number",number):printf("entered number %d is an odd number",number))
	
}
