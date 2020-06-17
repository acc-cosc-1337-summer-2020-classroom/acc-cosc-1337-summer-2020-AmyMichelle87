#include<iostream>
#include<string>
#include<iomanip>

using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;
	string user_reply; 
	do{
		cout << "Enter letter grade:  ";
		cin >> letter_grade;
		cout << "Enter credit hours: ";
		cin >> credit_hours;
		cout << "(Enter any key to continue or -1 to quit and get GPA) \n";
		cin >> user_reply; 
		sum_credit_points += get_grade_points(letter_grade) * credit_hours;
		sum_credit_hours += credit_hours; 
	}while(user_reply != "-1");

	
	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << std::fixed<<std::setprecision(3) << "GPA: " << gpa << "\n";

	return 0;
}