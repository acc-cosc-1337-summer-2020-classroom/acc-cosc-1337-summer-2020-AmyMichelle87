#include "bank_account.h"


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

std::ostream& operator<<(std::ostream& out, const BankAccount& account){               //overriding operators 
    out<<"Balance: "<<account.balance<<"\n";
    
    return out; 
}
std::istream& operator>>(std::istream& in, BankAccount& account){
    int amount; 
    std::cout<<"Enter amount: "; 
    std::cin>>amount; 

   if(account.option == OPTION::DEPOSIT){

       account.deposit(amount);

   }else if(account.option == OPTION::WITHDRAW){

       account.withdraw(amount);

   }

    return in;
}

int BankAccount::bank_balance = 0; 

void BranchBank::update_balance(int b){

    branch_balance += b; 
    BankAccount::bank_balance += b; 
}

