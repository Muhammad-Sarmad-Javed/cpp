#include<iostream>
using namespace std;

int main()
{
	int radius,height,area;
	
	cout << "Enter the radius of cylinder =";
	cin >> radius;
	cout << "Enter the height of cylinder =";
	cin >> height;
	
	area=2*3.14*radius*radius+2*3.14*radius*height;
	
	cout <<"The area of cylinder is =" << area;
	
	return 0;
}

