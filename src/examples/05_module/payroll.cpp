#include "payroll.h"
#include <iostream> 
#include <iomanip>
//
/*
Function gross_pay returns the product of hours and rate.  The function pays
straight time, there is not overtime.
*/
const double tax_rate = 0.062; 

double get_fica_total(double gross_pay){
    return gross_pay * tax_rate; 
}

double get_regular_pay(int hours, double rate){
   if(hours <= 40){
       return hours * rate; 
   }else{
       return 40 * rate; 
   }
    
}

double get_overtime_pay(int hours, double rate){
    if(hours > 40){
        return (hours - 40) * (1.5 * rate);
    }else {
        return hours * rate; 
    }
}

void display_payroll(int hours, double rate){
    double regular_pay, overtime_pay, ficaTotal, gross_pay, net_pay; 

    regular_pay = get_regular_pay(hours, rate);
    overtime_pay = get_overtime_pay(hours, rate);
    gross_pay = regular_pay + overtime_pay; 
    ficaTotal = get_fica_total(gross_pay);
    net_pay = gross_pay - ficaTotal; 

    using std::cout; 
    cout<<std::fixed<<std::setprecision(2);
    cout<<std::fixed<<std::setw(7);
    cout<<"\n";
    cout<<"Regular Pay: "<<std::setw(8)<<regular_pay<<"\n";
    cout<<"Overtime Pay: "<<std::setw(7)<<overtime_pay<<"\n";
    cout<<"Gross Pay: "<<std::setw(10)<<gross_pay<<"\n";
    cout<<"FICA: "<<std::setw(14)<<ficaTotal<<"\n";
    cout<<"Net Pay: "<<std::setw(12)<<net_pay<<"\n";

}