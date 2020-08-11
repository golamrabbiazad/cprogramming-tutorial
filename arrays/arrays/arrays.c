//
//  arrays.c
//  arrays
//

#include <stdio.h>


int main() {
    int a[10];
    int count;
    
    for (count =0; count < 10; count++) {
        a[count] = count * 1 + count;
    }
    
    printf("The first and second element of a are: %d %d\n", a[0], a[1]);
    printf("Or as a pointers, %d and %d\n", *a, *(a+1));
}
