//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H
#include<iostream> 
class ATM
{
    public: 
        ATM(BankAccount& a) : account{a}{}  //constructor to initialize bank account class. 
        void run();

    private: 
        void display_menu();  //helper functions/utility functions
        void set_choice();
        void handle_transaction();
        BankAccount account;   //our user defined class--composition 
        int choice; 
};

#endif 