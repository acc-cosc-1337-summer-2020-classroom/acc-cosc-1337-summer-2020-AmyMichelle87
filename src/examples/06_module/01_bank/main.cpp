#include  "bank_account.h"
#include<iostream>
#include<string>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include <memory>

using std::string; using std::cout; using std::cin; using std::unique_ptr; using std::make_unique; 
int main()
{	
	unique_ptr<BankAccount> a = make_unique<SavingsAccount>(600);  //heap--- making get_balance a virtual function will make this work properly. 
	cout<<a->get_balance()<<"\n";
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	cout<<c->get_balance()<<"\n";




	
	/*unique_ptr<BankAccount> a = make_unique<BankAccount>(600);  //heap 
	display_account_val(std::move(a)); //when your using a val not referencing the address of the object.  
	unique_ptr<BankAccount> a2 = get_account();  //using the example returning a pointer. 
	display_account(a2);*/

	//ATM atm;
	//atm.run();
	

	/*CheckingAccount c(1000); 
	cout<<c;
	CheckingAccount c1;
	cout<<c1; 
	SavingsAccount s(100);  
	cout<<s; 
	cout<<s.get_balance()<<"\n";  //will be zero for both because its the default constructor sets balance to zero. 
	SavingsAccount s1; 
	cout<<s1; //base class balance */

	
	



	/*BankAccount account; 
	BranchBank bank(10000); 
	bank.update_balance(500); 
	cout<<account; 
	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n"; */


	return 0;
}