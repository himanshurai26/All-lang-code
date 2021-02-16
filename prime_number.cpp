// code to check prime numbers 

#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "enter the number = ";
	cin >> number;
	int i, flag;
	for(i = 2; i < number/2; i++)
	{
		if(number % i ==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		cout << "entered number" <<number<< "is not prime number";	
	}
	else
	cout << "entered number" << number << "it is a prime number";
}
