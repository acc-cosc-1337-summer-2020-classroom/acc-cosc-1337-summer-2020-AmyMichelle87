//cpp
#include"sales_employee.h"

double SalesEmployee::get_pay(){
    
        if(hoursWorked <= 40){
            grossPay = hoursWorked * ratePaid + commissionPay; 
        }else{
            //calculating overtime
            otPay = (hoursWorked - 40) * ratePaid * 1.5; 
            regPay = ratePaid * 40; 
            grossPay = otPay + regPay + commissionPay; 
        } 

    return grossPay; 

}