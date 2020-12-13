#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,s,area;
	
	cout << "Enter the value of side 'a'=";
	cin >> a;
	
	cout << "Enter the value of side 'b'=";
	cin >> b;
	
	cout << "Enter the value of side 'c'=";
	cin >> c;
	
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "The Area of Triangle is ="<< area;
	
	return 0;
}
