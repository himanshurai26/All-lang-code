// code for goto 
// level_name           goto level
#include<iostream>
using namespace std;
int main()
{
	int pert;
	arun:
	cout << "enter percentage =";
	cin >> pert;
	if(pert < 75)
	{
		cout << "it is not an hons, please enter a new percentage again " << endl;
		saket:
			goto arun;
			
	}
	cout << "now, it is an honrs"<< endl;
	int ch;
	cout<<"enter your choice, 1 to continue other to exit =";
	cin >> ch;
	if (ch == 1)
	     goto saket;
		
		
}
