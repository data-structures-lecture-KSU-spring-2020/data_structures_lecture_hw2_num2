// Travis Hescox
// Homework 2
// Number 2
// Data Structures CS 3305
// Section 4

#include <stdio.h>
#include <iostream>
#include "bank_account.h"

using namespace std;

int main(int argc, char **argv)
{
	// Instantiates account pbject
	bank_account my_account;
	cout << "New Account Created!" << endl;
	
	// Displays that there is no owner and the balance is 0
	cout << "Account Balance: $" << my_account.getBalance() << endl;
	cout << "Account Owner: " << my_account.getOwner() << endl;
	cout << "Changing account owner... " << endl;
	
	// Changes acount owner and displays new owner
	my_account.changeOwner("Pikachu");
	cout << "Account owner changed successfully..." << endl;
	cout << "Account Owner: " << my_account.getOwner() << endl;
	cout << "Making $500,000.00 deposit..." << endl;
	
	// Makes deposit and displays balance
	my_account.deposit(500000);
	cout << "Deposit successful." << endl;
	cout << "Account balance: $" << my_account.getBalance() << endl;
	cout << "Making $5.00 withdraw..." << endl;
	
	// Makes withdrawal and displays balance
	my_account.withdraw(5);
	cout << "Withdraw successful." << endl;
	cout << "Account Balance: $" << my_account.getBalance();
	cout << endl;
	cout << endl;
	
	return 0;
}
