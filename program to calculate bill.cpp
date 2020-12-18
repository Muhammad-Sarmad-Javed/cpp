#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//DECLARING AND INITIALIZING
	int Pepsi=60,Biscuit=20,Nimko=10,Lays=50 ,Pepsi_quantity,Biscuit_quantity,Nimko_quantity,Lays_quantity,Net_Total,Cash,Balance;
	
	//GET QUNATITY 
	cout << "Enter the quantity of Pepsi =";
	cin  >> Pepsi_quantity;
	cout << "Enter the quantity of Biscuit =";
	cin  >> Biscuit_quantity;
	cout << "Enter the quantity of Nimko =";
	cin  >> Nimko_quantity;
	cout << "Enter the quantity of Lays =";
	cin  >> Lays_quantity;
	
	//TOTAL AMOUNT
	Net_Total=(Pepsi*Pepsi_quantity)+(Biscuit*Biscuit_quantity)+(Nimko*Nimko_quantity)+(Lays*Lays_quantity);
	
	//DISPLAY TOTAL BILL
	cout << "Your Total bill is :\t" << Net_Total << endl;
	
	//ENTER RECIVED CASH
	cout << "Enter the Cash recieved =";
	cin  >> Cash;
	
	//GET BALANCE AMOUNT
	Balance =Cash-Net_Total;
	
	//DISPLAY BALANCE AMOUNT
	cout << "Balance amount is :\t" << Balance;
	
	return 0;
}
