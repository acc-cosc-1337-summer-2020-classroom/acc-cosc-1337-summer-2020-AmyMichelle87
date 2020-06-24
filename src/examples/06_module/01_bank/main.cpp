#include  "bank_account.h"
#include<iostream>
#include<string>

using std::string; using std::cout; using std::cin; 
int main()
{	

	BankAccount account = get_account(1);
	
	int choice; 

	do{
		display_menu();
		choice = get_choice(); 

		handle_transaction(account, choice);
	}while(choice != 4); 

	



	return 0;
}