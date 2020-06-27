//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H
#include<iostream> 
#include<vector>
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
        vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};
};

#endif 