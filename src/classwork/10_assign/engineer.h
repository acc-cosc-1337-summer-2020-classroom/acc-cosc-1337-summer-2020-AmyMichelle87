//h
#include"employee.h"

#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee{
    

    public: 
        Engineer() : Employee(){}
        Engineer(double base, double bonus)
        :Employee(base,bonus){
             basePay = base; 
                bonusPay = bonus;
        }        
        double get_pay();
        double basePay, bonusPay;
     
       
       

};
#endif