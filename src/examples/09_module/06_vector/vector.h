//
#ifndef VECTOR_H
#define VECTOR_H
#include<cstddef> 
#include<stddef.h>

class Vector{

    public: 
      Vector(size_t sz); 
      Vector(const Vector& v); //copy constructor - RULE OF 3 C++98
      Vector& operator=(const Vector& v); //copy assignment - RULE OF 3 C++98
      Vector(Vector&& v); //move constructor 
      size_t Size()const{ return size; }
      int& operator[](size_t i){return element[i];}
      int& operator[](size_t i)const{return element[i];}
      void set_element_value(size_t index, int value){ element[index] = value; }
      int get_element(size_t index){return element[index]; }
      ~Vector(); //destructor - RULE OF # C++98

    private: 
      size_t size; 
      int* element; 



}; 

#endif 

//free function -NOT PART OF THE VECTOR CLASS
void use_stack_vector(); 
void use_heap_vector(); 