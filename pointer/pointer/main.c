// pointer.c

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // declaring a variable & a pointer with same line because of everytime 'int' added and program gets bigger.
    // if *ptr_to_a is an another data type then you better understand. 😀
    
    int a = 5, *ptr_to_a;
    
    // now, pointer is going to be pointed at a that whenever we change any of this values, it will change automatically other values.
    
    // in short pointer is an address of memory that we are tracking.
    
    // time to track/point to the variable that we want to.
    
    // we are pointing/ or refering the memory address of a.
    ptr_to_a = &a;
    
    // now we are initialize the variable a = 5;
    a = 5;
    
    // show me the value of a and the pointer
    printf("The value of a: %i and the ptr_to_a: %i\n", a, *ptr_to_a);
    
    // NOTE: printing value of a variable and pointer just give arg as same as declared variable. For printing addresss add reference sign '&' to the variable and remove the asterisk/star '*' before the pointer. that's it.
    
    // and show me the address of memory. Are they same?
    printf("The address in memory of a: %i and the address in memory of ptr_to_a: %i\n", &a, ptr_to_a);
    
    
    // now comming to the interesting part //
    
    // change the value of variable or pointer
    a = 10;
    
    // show me the value of a and the pointer
    printf("\n\nThe value of a: %i and the ptr_to_a: %i\n", a, *ptr_to_a);
    
    
    // and show me the address of memory. now you guess, it will be the same.
    printf("The address in memory of a: %i and the address in memory of ptr_to_a: %i\n", &a, ptr_to_a);
    
    // NOTE: remember the address of memory that we declare a = 5 it can't change. That address of memory always the same. Just values are changed.
    
    // now comparing with another pointer (an address of memory) to clear the concept.
    
    int b = 1, *ptr_to_b;
    
    ptr_to_b = &b;
    
    // and show me the address of memory. now you guess, it's different memory address
    printf("\n\nThe address in memory of a: %i and the address in memory of ptr_to_a: %i\n", ptr_to_a, ptr_to_b);
    
    // let's write if..else case
    if(ptr_to_a > ptr_to_b) {
        printf("\nNo! it's a different memory address\n");
    } else if (ptr_to_a == ptr_to_b) {
        printf("\nThey are same and pointing to the same momory address\n");
    } else {
        printf("\nSomething went wrong!\n");
    }
}


// also, if you ever tried other programming language like java, javascript, python, ruby they all has object and object are reference type that points at an address of memory.


// So, it is similar concept.
