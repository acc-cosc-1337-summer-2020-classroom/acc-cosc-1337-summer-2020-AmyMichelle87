//h
#include<iostream>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using std::cout; using std::cin; 

class Employee{


    public:      
        Employee(){}  
        Employee(double, double);
        Employee(double, double, double);
        virtual double get_pay() = 0;
        double grossPay, otPay, regPay;
        double basePay, bonusPay, hoursWorked, ratePaid, commissionPay; 
        virtual ~Employee(){}
        
        
};

#endif