//h
#include "employee.h"

#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee: public Employee{

    public: 
        SalesEmployee() : Employee(){}
        SalesEmployee(double hours, double rate, double commission)
        {
            hoursWorked = hours; 
            ratePaid = rate; 
            commissionPay = commission;
        }
        double get_pay();
    private: 
        double hoursWorked, ratePaid, commissionPay; 
        double grossPay, otPay, regPay;

};

#endif