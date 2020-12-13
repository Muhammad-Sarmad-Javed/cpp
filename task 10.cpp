#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	
	cout << "Enter first value =";
	cin >> n1;
	cout << "Enter second value =";
	cin >> n2;
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	cout << "The value of 'n1' after swap =" << n1 << endl;
	cout << "The value of 'n2' after swap =" << n2;
	
	return 0;
}

