//cpp
#include"sales_employee.h"

double SalesEmployee::get_pay(){
    double hours; 
    double rate; 
    double commission;

    cout<<"Enter hours: "<<"\n";
    cin>>hours; 
    cout<<"Enter hourly rate: "<<"\n";
    cin>>rate; 
    if(hours > 40){
        rate = rate * 1.5; 
    }
    cout<<"Enter commission: "<<"\n";
    cin>>commission; 
    grossPay = hours * rate + commission; 

    return grossPay; 

}