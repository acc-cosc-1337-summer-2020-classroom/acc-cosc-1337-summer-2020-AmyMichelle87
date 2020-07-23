//
#ifndef VECTOR_H
#define VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector{

    public: 
      Vector(size_t sz); 
      Vector(const Vector& v); //copy constructor 
      Vector& operator=(const Vector& v); 
      size_t Size()const{ return size; }
      void set_element_value(size_t index, int value){ element[index] = value; }
      int get_element(size_t index){return element[index]; }
      ~Vector();

    private: 
      size_t size; 
      int* element; 



}; 

#endif 

//free function -NOT PART OF THE VECTOR CLASS
void use_stack_vector(); 
void use_heap_vector(); 