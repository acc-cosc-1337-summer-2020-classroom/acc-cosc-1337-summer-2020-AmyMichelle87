#include  "bank_account.h"
#include<iostream>
#include<string>
#include "atm.h"

using std::string; using std::cout; using std::cin; 
int main()
{	

	BankAccount account(100);   //using this to get a bank account from the function. 
	cout<<"Accout: "<<account.get_balance()<<"\n";

	//ATM atm(account);
	//atm.run();
	
	BankAccount account1 = account;
	cout<<"Account1: "<<account1.get_balance()<<"\n";

	account.deposit(50);
	cout<<"Account: "<<account.get_balance()<<"\n";

	cout<<"Account1: "<<account1.get_balance()<<"\n";


	



	return 0;
}