// comparison operators

#include<iostream>

using namespace std;

int main()
{
	int a = 3, b = 5;
	
	cout<<"the following are the types of conparison operators in c++"<<endl;
	cout<<"the value of a==b is "<<(a==b)<<endl;
	cout<<"the value of a !=b is "<<(a!=b)<<endl;
	cout<<"the value of a>=b is "<<(a>=b)<<endl;
	cout<<"the value of a<=b is "<<(a<=b)<<endl;
	cout<<"the value of a>b is "<<(a>b)<<endl;
	cout<<"the value of a<b is "<<(a<b)<<endl;
	
	//logical operator
	cout<<"following are the logical operator in c++"<<endl;
	cout<<"the value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
		cout<<"the value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
      	cout<<"the value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
	return 0;

}
