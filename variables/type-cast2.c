#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* code */
    int a;
    float aroot;

    printf("Type an integer: ");
    scanf("%d", &a);
    aroot = sqrt(abs(a));
    printf("This square root of %d is %f\n", a, aroot);
    return 0;
}
