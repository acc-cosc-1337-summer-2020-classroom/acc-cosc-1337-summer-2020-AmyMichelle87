#include "vector.h"
#include<iostream>

//
Vector::Vector(size_t sz)
:size{sz}, element(new int[sz]){
    for(size_t i = 0; i < sz; i++){
        element[i] = 0; 
    }
}
Vector::Vector(const Vector& v)
:size{v.size}, element{new int[v.size]}{
    for(size_t i = 0; i < size; i++){
        element[i] = v.element[i]; 
    }
}
Vector::~Vector(){                                              //this releases the memory and fixed the memory leak. 
    std::cout<<"\nRelease memory\n";                            //This is the desctructor
    delete[] element; 
}
Vector& Vector::operator=(const Vector& v){
    
}

//THIS IS NOT APART OF THE VECTOR CLASS!!! FREE FUNCTION 
void use_stack_vector(){
    Vector v1(3);                 //dont need to call delete
}
void use_heap_vector(){
    Vector* v1 = new Vector(3);           //using dynamic memory and need to call delete to prevent a memory leak 
    delete v1; 
}
