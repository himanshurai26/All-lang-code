// Member function defining the outside the class
// return_type class_name : : function_name(arguments)
//:: scope resolution operator ->
#include<iostream>
using namespace std;

class rectangle
{
	float l, b;
	void compute_area();
	public:
		void input();
		void show();
};
void rectangle :: input()
{
	cout << "enter the length of rectangle = ";
	cin >> l;
	cout << "enter the breath of rectangle = ";
	cin >> b;
};

void rectangle :: show()
{
	compute_area()
	cout << "area of the rectangle =" << area <<endl;
}
void rectangle :: compute_area()
{
	area = l * b;
}
int main()
{
	rectangle rt;
	rt.input();
	rt.show();
	return 0;
}
