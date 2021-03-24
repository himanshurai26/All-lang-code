// control structure 
// efective c program 
 
#include<iostream>

using namespace std;

int main()
{
	cout<<"this is control structure"<<endl;  
    int age;
	cout<<"tell me your age"<<endl;
	cin>>age;
	
// selection control structure :if -else ladder	    
//	if((age<18) && (age>0))
//	{
//		cout<<"you can not come to the party"<<endl;
//	}
//	else if(age<1)
//	{
//		cout<<"you are not yet born"<<endl;
//	}
//	else if(age==18)
//	{
//		cout<<"you ae a kid and you will get a kid pass entry for the party"<<endl;
//	}
//	e
//	{
//		cout<<"you can come to the party and enjoy it with fun";
//	}
 
//  selection control : switch case
switch (age)
{
	case 18:
		cout<<"you are 18"<<endl;
	//	break ;
	case 22:
	   cout<<"you are 22"<<endl;
	  //  break;
	case 2:
	    cout<<"you are 2"<<endl;
	//	break;		
	default:
		cout<<"no such special case"<<endl;
	   break;	
}

	return 0;
	
}
