//h
#include "employee.h"

#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee: public Employee{

    public: 
        SalesEmployee() : Employee(){}
        SalesEmployee(double hours, double rate, double commission)
        :Employee(hours, rate, commission){
            hoursWorked = hours; 
            ratePaid = rate; 
            commissionPay = commission;
        }
        double get_pay();
        double hoursWorked, ratePaid, commissionPay; 

};

#endif