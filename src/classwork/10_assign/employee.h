//h
#include<iostream>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using std::cout; using std::cin; 

class Employee{

    public:                 
        virtual double get_pay() = 0;
    private: 
        double grossPay = 0; 

};

#endif