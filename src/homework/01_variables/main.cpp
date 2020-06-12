//write include statements"
#include <iostream>
#include "variables.h"
#include <iomanip>

//write namespace using statement for cout
using std::cout; using std::cin; 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout<<"Enter the meal amount: ";
	cin>>meal_amount; 

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter tip percentage rate: ";
	cin>>tip_rate; 
	cout<<"\n\n"; 

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tax_amount + tip_amount; 

	cout<<"Meal Amount: "<<std::setw(5)<<std::fixed<<std::setprecision(2)<<"$"<<meal_amount<<"\n"; 
	cout<<"Sales Tax: "<<std::setw(7)<<std::fixed<<std::setprecision(2)<<"$"<<tax_amount<<"\n"; 
	cout<<"Tip Amount: "<<std::setw(6)<<std::fixed<<std::setprecision(2)<<"$"<<tip_amount<<"\n"; 
	cout<<"Total: "<<std::setw(11)<<std::fixed<<std::setprecision(2)<<"$"<<total<<"\n"; 
	
	

	return 0;
}
