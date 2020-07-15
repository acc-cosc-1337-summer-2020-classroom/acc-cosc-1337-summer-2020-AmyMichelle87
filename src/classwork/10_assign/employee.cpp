#include"employee.h"


Employee::Employee(double base, double bonus){
    basePay = base; 
    bonusPay = bonus; 
}
Employee::Employee(double hours, double rate, double commission){
    hoursWorked = hours; 
    ratePaid = rate; 
    commissionPay = commission; 
}