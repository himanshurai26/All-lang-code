#include<iostream.h>

using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"classA";
		};
	class B{
		public:
		void display()
		{
			cout<<"class B";
			}	
	};
	class C: public A,public B
	{
		void view()
		{
			display():
		}
		};
		int main()
		{
			C c;
			C.display();
			return 0;
			}	
		

