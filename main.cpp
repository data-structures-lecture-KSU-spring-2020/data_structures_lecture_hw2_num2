#include <stdio.h>
#include <iostream>
#include "bank_account.h"

using namespace std;

int main(int argc, char **argv)
{
	bank_account my_account;
	cout << "New Account Created!" << endl;
	cout << "Account Balance: $" << my_account.getBalance() << endl;
	cout << "Account Owner: " << my_account.getOwner() << endl;
	cout << "Changing account owner... " << endl;
	my_account.changeOwner("Pikachu");
	cout << "Account owner changes successfully..." << endl;
	cout << "Account Owner: " << my_account.getOwner() << endl;
	cout << "Making $500,000.00 deposit..." << endl;
	my_account.deposit(500000);
	cout << "Deposit successful." << endl;
	cout << "Account balance: $" << my_account.getBalance() << endl;
	cout << "Making $5.00 withdraw..." << endl;
	my_account.withdraw(5);
	cout << "Withdraw successful." << endl;
	cout << "Account Balance: $" << my_account.getBalance();
	cout << endl;
	cout << endl;
	
	return 0;
}
