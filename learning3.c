#include<stdio.h>

int main()
{
	int age;
	printf("enter your age\n");
	
	scanf("%d", &age);
	printf("you have entered %d as your age\n", age);
	if (age>18) {
		printf("you can vote!");
	}
	else if(age>10)
	{
		printf("you are  between 10 and 18 and you can vote for kids");
	}
	
	else if(age>=3)
	{
		printf("you are between 3 to 10 and you can vote for babies");
	}
	
	
	 else{
		printf("you can not vote!");
	}
	
	
	return 0;
}

