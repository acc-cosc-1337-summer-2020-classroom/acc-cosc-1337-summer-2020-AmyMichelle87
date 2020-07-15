//h
#include "employee.h"

#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee: public Employee{

    public: 
    SalesEmployee(double hours, double rate, double commisison)
    :Employee(hours, rate, commission){
        hoursWorked = hours; 
        ratePaid = rate ;
        commissionPay = commission; 
    }
        double get_pay();

};

#endif