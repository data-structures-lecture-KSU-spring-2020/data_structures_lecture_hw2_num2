// Travis Hescox
// Homework 2
// Number 2
// Data Structures CS 3305
// Section 4

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>

using namespace std;


class bank_account
{
	
public:
	bank_account();
	void deposit(int depositAmount);
	void withdraw(int withdrawAmount);
	void changeOwner(string newOwner);
	double getBalance();
	string getOwner();	
	

private:
	string owner;
	double balance;

};

#endif // BANK_ACCOUNT_H
