// simple class

#include<iostream>
using namespace std;

class SimpleClass
{
	public:
		int rollno;
		float percent;
};

int main()
{
	SimpleClass sc;             //sc is the object
	cout <<"enter the roll no =";
	cin >> sc.rollno;
	cout << "enter the percent =" ;
	cin >> sc.percent;
	cout << "____________entered value are______________"<< endl;
	cout << "Roll No = " << sc.rollno<< endl;
	cout << "percent = " <<sc.percent << endl;
	return 0;
}
