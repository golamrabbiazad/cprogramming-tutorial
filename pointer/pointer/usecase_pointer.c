//
//  usecase_pointer.c
//  pointer
//

#include <stdio.h>


void main(void) {
    int value_of_int = 255958283;
    void *ptr_void = &value_of_int;
    
    // So, what is casting?
    // Casting is basically return a specific type of value that we set. Examples:
    
    printf("The value at ptr_void as int: %d\n", *((int *)ptr_void));
    //Here, we want to see the value of *ptr_void but it's a void type, doesn't have return type and now we are casting to with int, char value to see it.
    
    printf("The value at ptr_void as char: %d\n", *((char *)ptr_void));

}


// So, what the use case of pointer?

// well, there are several ways pointers are useful. Few of the important ones,

// function calls - pointer are very useful for allowing a function to return a multiple values.

// string handling - in c, string is a continuous block of memory with a letter stored in each byte; pointers makes it possible to perform efficient operations on strings.

// and arrays - c allows array variables, list of values of the same type, which like string handling. Pointer make accessing arrays easier and more efficient.
