//
//  main.c
//  functions

#include <stdio.h>

// There are two ways to declare fn and let the main fn know to call.

// the first way of fn declaration
int sum_and_diff(int a, int b, int *res) {
    int sum = a + b;
    *res = a - b;
    return sum;
}

// this the second way to let the main fn know that find the same declared function where ever located
//int sum_and_diff(int a, int b, int *res);

void main(int argc, const char * argv[]) {
    int b = 2;
    int diff; // actually, it's refers to the *res pointer
    
    // so, sum_and_diff => a = 5, b = 2, *res = &diff)
    
    printf("The sum of 5 and %d is %d\n", b, sum_and_diff(5, b, &diff));
    // we passing to the function 3rd argument reference that diff of *res pointer.
    
    printf("The difference of 5 and %d is %d\n", b, diff);
    
}

// Which one should you choose or preferred?

// I would say it depends on program, whether the program is small it's better to declare before the main fn.
// if the program medium size or bigger then i suggest you to modularise or split code into another file and keep the main function stay alone.

// [Note: modularising is the best way to keep code clean and reusable]
