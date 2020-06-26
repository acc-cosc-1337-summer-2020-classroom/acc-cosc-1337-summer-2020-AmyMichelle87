//write include statements
#include "dna.h"
#include <string>
#include <iostream> 

//write using statements
using std::cout; using std::cin; using std::string; 

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string choice; 
	string dna; 
	double gc_content; 
	string dna_complement;

	while(1){
		cout<<"Enter a DNA string: "; 
		cin>>dna; 
		cout<<"\nPlease Make a Selection\n\n";
		cout<<"1) Get GC Content\n";
		cout<<"2) Get DNA Complement\n\n";
		cout<<"Enter choice here\n";
		cin>>choice; 
		
		
		if(choice == "1"){
			gc_content = get_gc_content(dna);
			cout<<"GC Content: "<<gc_content<<"\n"; 
		}else if(choice == "2"){
			dna_complement = get_dna_complement(dna); 
			cout<<"DNA Complement: "<<dna_complement<<"\n";
		}else{
			cout<<"Invalid DNA String. \n Please try again. ";
		}


		string choice2; 
		cout<<"Would you like to continue(y/n)?";
		cin>>choice2; 



		if(choice2 == "y" || choice2 == "Y"){
			cout<<"\n"<<std::endl; 
		}else {
			cout<<"Goodbye!\n";
			break;
		}
	}
	return 0; 
}