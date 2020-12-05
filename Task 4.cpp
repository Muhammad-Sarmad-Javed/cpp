#include<iostream>
using namespace std;

int main()
{
	int Phy=70,Comp=80,Math=90,Eng=80,sum,avg;					//DECARING AND INITIAIZING
	
	sum=Phy+Comp+Math+Eng;										//ADDING VARIABLES
	avg=sum/4;													//ADDITION DIVIDED BY NO. OF VARIABLES
	
	cout << "The average of four test score is = " << avg;		//DISPLAY THE RESULT
	
	return 0;
}
