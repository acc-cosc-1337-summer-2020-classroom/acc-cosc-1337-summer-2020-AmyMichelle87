//cpp
#include"sales_employee.h"

double SalesEmployee::get_pay(){
   
    

    if(hoursWorked > 40){
        double OTpay = (hoursWorked - 40) * (ratePaid * 1.5); 
        grossPay = (hoursWorked * ratePaid + commissionPay) + OTpay; 
    }else {
        grossPay = hoursWorked * ratePaid + commissionPay; 
    }
    

    return grossPay; 

}