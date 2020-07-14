#include "ref_pointers.h"
#include<iostream>
using std::cout; 

int main() 
{
	int r = 0, p = 0; 
	int& ref_r = r; 

	cout<<"Address of r: "<<&r; 
	cout<<"Value of r: " << r; 
	cout<<"Address of ref_r: "<<&ref_r;

	return 0;
}