#include "bank_account.h"
//bank_account.cpp

void BankAccount::deposit(int amount){
    
    if(amount > 0){
        balance += amount; 
    }
}
void BankAccount::withdraw(int amount){
    if(amount > 0 && balance >= amount){
        balance -= amount; 
    }
}