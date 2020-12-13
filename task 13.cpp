#include<iostream>
using namespace std;

int main()
{
	int fahrenheit,celcius;
	
	cout << "Enter the temprature in fahrenheit =";
	cin >> fahrenheit;
	
	celcius=fahrenheit*5/9-32*5/9;
	
	cout << "Your temprature in celcius is=" << celcius;
	
	return 0;
}

