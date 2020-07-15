//h
#include<iostream>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using std::cout; using std::cin; 

class Employee{


    public:    
        Employee(double base, double bonus); 
        Employee(double hours, double rate, double commission);       
        virtual double get_pay() = 0;
        double grossPay;
        double basePay, bonus, hours, rate, commission; 
};

#endif