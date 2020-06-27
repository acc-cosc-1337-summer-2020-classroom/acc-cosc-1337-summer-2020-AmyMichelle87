#include "bank_account.h"

using std::vector; 
using std::cout; 
using std::cin; 
//bank_account.cpp



void BankAccount::deposit(int amount){
    
    if(amount > 0){
        balance += amount; 
        bank_balance += amount; 
    }
}
void BankAccount::withdraw(int amount){
    if(amount > 0 && balance >= amount){
        balance -= amount; 
        bank_balance -= amount; 
    }
}

int BankAccount::bank_balance = 0; 

