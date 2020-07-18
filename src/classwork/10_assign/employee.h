//h
#include<iostream>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using std::cout; using std::cin; 

class Employee{


    public:      
        Employee(){}  
        virtual double get_pay() = 0;
        virtual ~Employee(){}  
     
};

#endif