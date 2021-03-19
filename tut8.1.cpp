#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//int a = 3, b=78, c = 1254;
	//cout<<"the value of a is :"<<setw(4)<<a<<endl;
	//cout<<"the value of b is :"<<b<<endl;
	//cout<<"the value of c is :"<<c<<endl;
	
	/* OPERATOR PRECEDENCE */
	int a = 3, b=4;
	int c = (a*5)+b-44+65;
	cout<<c;
	return 0;
}
