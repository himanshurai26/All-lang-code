#include<stdio.h>

int main()
{
	int physics, chemistry, maths;
	float total;
	printf("enter the physics marks\n ");
	scanf("%d", &physics);
	
	printf("enter the chemistry marks\n ");
	scanf("%d", &chemistry);
	
	printf("enter the maths marks\n ");
	scanf("%d", &maths);

     total = (physics + maths + chemistry)/3;
     if((total<40) || physics<33 || maths<33 || chemistry<33 )
	 {
     	printf("your total percentage is %f and you are failed\n", total);
	 }
	 else
	 {
	 	printf("your total percentage is %f and you are ppass\n", total);
	 }

    return 0;
}
