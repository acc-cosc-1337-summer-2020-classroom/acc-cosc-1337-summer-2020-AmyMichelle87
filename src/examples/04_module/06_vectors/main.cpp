
#include "vec.h"
#include <vector>
#include <iostream>
#include <string> 

using std::vector; 
using std::string; 
int main() 
{
	vector<int> num; 

	vector<int> num1(5);

	for(auto n: num1){
		std::cout<<n<<"\n";
	}

	vector<char> char1(5, 'z');       //creates 5 elements with the value z 

	for(auto c: char1){
		std::cout<<c<<"\n";
	}
	vector<double> dubs{1.5, 2.5};   //initializer list using curly brackets. 
	vector<std::string> names {"jon", "john", "mary"};
	names.push_back("Jill");

	for(auto n: names){
		std::cout<<n<<"\n";
	}

	return 0;
}