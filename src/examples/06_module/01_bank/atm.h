//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H
#include<iostream> 
#include<vector>
#include <memory> 
#include"checking_account.h"
#include"savings_account.h"
using std::vector; 

class ATM
{
    public: 
        ATM(){}  //constructor to initialize bank account class. 
        void run();

    private: 
        void scan_card();
        void display_menu();  //helper functions/utility functions
        void set_choice();
        void handle_transaction();
        int choice; 
        int selected_account_index; 
        vector<BankAccount> accounts{CheckingAccount(100), BankAccount(200)};
};

#endif    

void display_account(std::unique_ptr<BankAccount>& account);//By reference 
void display_account_val(std::unique_ptr<BankAccount> account); //By Value / copy of unique pointer is created. 
std::unique_ptr<BankAccount> get_account(); 