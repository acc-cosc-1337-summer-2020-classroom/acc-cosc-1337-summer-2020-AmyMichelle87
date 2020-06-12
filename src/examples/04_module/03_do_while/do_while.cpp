#include "do_while.h"

//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user(){
    char choice; 

    do{
        std::cout<<"Enter y or n to continue: ";
        std::cin>>choice; 
    }
    while(choice == 'y' || choice == 'Y');
}
