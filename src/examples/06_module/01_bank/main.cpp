#include  "bank_account.h"
#include<iostream>
#include<string>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"

using std::string; using std::cout; using std::cin; 
int main()
{	

	//ATM atm;
	//atm.run();
	

	CheckingAccount c(1000); 
	cout<<c;
	CheckingAccount c1;
	cout<<c1; 
	SavingsAccount s(100);  
	cout<<s; 
	cout<<s.get_balance()<<"\n";  //will be zero for both because its the default constructor sets balance to zero. 
	SavingsAccount s1; 
	cout<<s1; //base class balance 

	
	



	/*BankAccount account; 
	BranchBank bank(10000); 
	bank.update_balance(500); 
	cout<<account; 
	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n"; */


	return 0;
}