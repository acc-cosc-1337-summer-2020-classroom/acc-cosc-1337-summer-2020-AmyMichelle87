#include  "bank_account.h"
#include<iostream>
#include<string>
#include "atm.h"

using std::string; using std::cout; using std::cin; 
int main()
{	

	BankAccount account = get_account(1);   //using this to get a bank account from the function. 
	

	ATM atm(account);
	atm.run();
	
	



	return 0;
}