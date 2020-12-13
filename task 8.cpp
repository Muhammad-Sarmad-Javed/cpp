#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n1,n2,sub,sum,multi,rem,div;
	
	cout << "Enter first number =";
	cin  >> n1;
	cout << "Enter 2nd number =";
	cin  >> n2;
	
	sum=n1+n2;
	sub=n1-n2;
	multi=n1*n2;
	rem=n1%n2;
	div=n1/n2;
	
	cout << "Your sum is =" << sum << endl;
	cout << "Your subtraction is =" << sub << endl;
	cout << "Your multiplication is =" << multi << endl;
	cout << "Your remender is =" << rem << endl;
	cout << "Your division is =" << div;
	
	
	return 0;
}
