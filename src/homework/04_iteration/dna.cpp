#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna){

double dna_content = 0.0; 
int string_length = 0; 
int i = 0; 

while(dna[i] != '\0'){
    if(dna[i] == 'G' || dna[i] == 'C' ){
        dna_content += 1; 
        
    }
    i += 1; 
    string_length += 1; 
}
    return dna_content /string_length;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna){
    string reversed = "";

    for(int i = dna.length()-1; i >=0; i--){
        reversed += dna[i];
    }
    return reversed; 

}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna){

    string dna_complement = "";
    string get_reverse = get_reverse_string(dna); 

    for(std::size_t i = 0; i < get_reverse.length(); i++){
        if(get_reverse[i] == 'A'){
            dna_complement += 'T';
        }
        if(get_reverse[i] == 'T'){
            dna_complement += 'A'; 
        }
        if(get_reverse[i] == 'C'){
            dna_complement += 'G'; 
        }
        if(get_reverse[i] == 'G') {
            dna_complement += 'C'; 
        }
    }
    return dna_complement; 

}