//h
#include"employee.h"

#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee{
    

    public: 
        Engineer(double base, double bonus);
        double get_pay();
       

};
#endif