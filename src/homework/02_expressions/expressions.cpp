#include "expressions.h"

//write code for multiply_numbers function here
//function returns product of num1 and num2

double get_grade_points(std::string(letter_grade)){
	double grade_points = 0; 
	if(letter_grade == "A"){
		grade_points = 4;
	}else if(letter_grade == "B"){
		grade_points = 3; 
	}else if(letter_grade == "C"){
		grade_points = 2; 
	}else if(letter_grade == "D"){
		grade_points = 1; 	
	}else {
		grade_points = 0; 
	}
	return grade_points; 
}
