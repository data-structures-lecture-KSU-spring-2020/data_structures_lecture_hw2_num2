#include "bank_account.h"
#include <string>

bank_account::bank_account(){
	balance = 0.00;
	owner = "None";
	};

void bank_account::deposit(int depositAmount){
	balance += depositAmount;
};

void bank_account::withdraw(int withdrawAmount){
	balance -= withdrawAmount;
};

void bank_account::changeOwner(string newOwner){
	owner = newOwner;
}
double bank_account::getBalance(){
	return balance;
};

string bank_account::getOwner(){
	return owner;	
};



