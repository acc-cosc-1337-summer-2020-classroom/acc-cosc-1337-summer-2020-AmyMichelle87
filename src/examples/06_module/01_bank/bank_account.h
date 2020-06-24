//bank_account.h
#include <vector> 
#include<iostream>

enum transaction{DEPOSIT=1, WITHDRAW=2,  DISPLAY=3};

class BankAccount{
    public: 
         BankAccount() : BankAccount(0){}//delegating constructor
    BankAccount(int b) : balance{b} { bank_balance += balance; } //initializer list
    int get_balance() const {return balance;}//inline class function
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private:
    int balance;//lock this variable
    static int bank_balance;
};
BankAccount& get_account(int i);  //free function {

void display_menu();

void handle_transaction(BankAccount& account, int choice);

int get_choice();