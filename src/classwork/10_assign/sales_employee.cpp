//cpp
#include"sales_employee.h"

double SalesEmployee::get_pay(){
   
    
    grossPay = hoursWorked * ratePaid + commissionPay; 

    return grossPay; 

}