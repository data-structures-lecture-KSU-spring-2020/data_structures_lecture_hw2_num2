// Travis Hescox
// Homework 2
// Number 2
// Data Structures CS 3305
// Section 4

#include "bank_account.h"
#include <string>

bank_account::bank_account(){
	balance = 0.00;
	owner = "None";
	};

// Deposits money to account
void bank_account::deposit(int depositAmount){
	balance += depositAmount;
};

// Withdraws money from the account
void bank_account::withdraw(int withdrawAmount){
	balance -= withdrawAmount;
};

// Changes owner
void bank_account::changeOwner(string newOwner){
	owner = newOwner;
}

// Returns account balance
double bank_account::getBalance(){
	return balance;
};

string bank_account::getOwner(){
	return owner;	
};



