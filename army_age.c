// if esle statement using in coding //
// Author himanshu date 30-01-2021 //

#include<stdio.h>
int main()
{
	int armyage;
	printf("enter your army age\n");
	scanf("%d", armyage);
	printf("you have entered %d in your armyage\n", armyage);
	if (armyage>17)
	{
		printf("you are eligible for runing");
	}
	else if(armyage>10)
	{ printf("your age in between 10 and 17 you can not eligible for run");
	}
	
	else{
		printf("you are not eligible for runing");
	}
	
	return 0;
	
}
