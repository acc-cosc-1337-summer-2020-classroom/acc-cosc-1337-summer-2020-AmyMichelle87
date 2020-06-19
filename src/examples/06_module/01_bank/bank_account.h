//bank_account.h
class BankAccount{
    public: 
        BankAccount(){ balance = 500;}    //default constructor with no params. 
        BankAccount(int b) : balance{b} {}  //constructor for bank account class  and initializer list 
        int get_balance() const{return balance; };  //inline class function 
        void deposit(int amount);
        void withdraw(int amount);
    private: 
        int balance; //lock this variable by setting it to private

};