// simple class with more feature
#include<iostream>
using namespace std;

class circle
{
	float radius, area;
	void compute_area()
	{
		area = 3.14 * radius * radius;
	}
    public:
    	void input_radius()
    	{
    		cout << "enter the radius of the circle =";
    		cin >>radius;
		}
    	void show_area()
    	{
    		compute_area();
    		cout <<"area of the circle with radius"<< radius <<"="<< area <<endl;
		}
};

int main()
{
	circle c;
	c.input_radius();
	c.show_area();
	return 0;
}
