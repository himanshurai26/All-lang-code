// Basic inheritence code
#include<iostream>
using namespace std;

class parent
{
	public:
		int pid;
};

class child: public parent {
	public:
		int cid;
};

int main()
{
	child c;
	c.cid = 10;
	c.pid = 100;
	cout << "child id =" << c.cid << endl;
	cout << "parent id =" << c.pid << endl;
	return 0; 
}
