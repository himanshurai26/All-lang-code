
// there are two type of header files:
// 1. system header files: it comes with the compiler
#include<iostream>
// 2. user defined header files : it is written by the programmer
//#include "this.h"--> this will produce an error if this.h is no present in the current directory
using namespace std;

int main()
{
	int a=4, b=5;
	cout<<"operators in c++:"<<endl;
	cout<<"following are the types of operators in c++"<<endl;
	//Arithmetic operators
	cout<<"the value of a + b is "<<a+b<<endl;
	cout<<"the value of a - b is "<<a-b<<endl;
	cout<<"the value of a * b is "<<a*b<<endl;
	cout<<"the value of a / b is "<<a/b<<endl;
	cout<<"the value of a % b is "<<a%b<<endl;
	cout<<"the value of a ++ is "<<a++<<endl;
	cout<<"the value of a -- is "<<a --<<endl;
	cout<<"the value of ++a is "<<a++<<endl;
	
	// Assignment operaroes --> used to assign value to variables
	// int a = 3, b=9;
	// char d= 'd';
	
	// comparison operators
	cout<<"the value of a == b is "<<(a==b)<<endl;
		cout<<"the value of a == b is "<<(a==b)<<endl;
			cout<<"the value of a == b is "<<(a==b)<<endl;
				cout<<"the value of a == b is "<<(a==b)<<endl;
					cout<<"the value of a == b is "<<(a==b)<<endl;	
						cout<<"the value of a == b is "<<(a==b)<<endl;
	return 0;
	
	return 0;
}
