//cpp
#include"engineer.h"

Engineer::Engineer(double base, double bonus){
    basePay = base; 
    bonusPay = bonus; 
}

double Engineer::get_pay(){
    
    double base_pay ; 
    double bonus; 
    grossPay = base_pay + bonus; 

    cout<<"Enter Base Pay: "<<"\n";
    cin>>base_pay; 
    cout<<"Enter Bonus: "<<"\n";
    cin>>bonus;
    cout<<"Engineer gross pay for current pay period: "<<grossPay<<"\n";

    return grossPay; 
}