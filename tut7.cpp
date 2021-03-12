#include<iostream>

using namespace std;
 
 int c = 45;
int main()
{
	int a, b, c;
	float d  34.4
	cout<<"enter th value of a:"<<endl;
	cin>>a;
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	c = a + b;
	cout<<"the sum is "<<c<<endl;
	// :: tihs is scope resolution operator
	
	cout<<"the flobal c is "<<::c;
	
	return 0;
}
