// control structure 
// efective c program 
 
#include<iostream>

using namespace std;

int main()
{
	cout<<"this is control structure";  
    int age;
	cout<"tell me your age";
	cin>>age;    
	if(age<18)
	{
		cout<<"you can not come to my party"<<endl;
	}
	else if(age==18)
	{
		cout<<"you ae a kid and you will get a kid pass entry for the party"<<endl;
	}
	else
	{
		cout<<"you may come";
	}
	return 0;
}
