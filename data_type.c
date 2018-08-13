#include <stdio.h>

int main () {
    /* code */
    int golbalNumber;
    golbalNumber = 50;
    char myNumber = 'A';
    printf("My Number will be print : %c", myNumber);
    char myOtherNumber = myNumber + 57;
    printf("Again my number will be print as : %c \n", myOtherNumber);
    int otherGolbalNumber = golbalNumber * 5;
    printf("The Result wll be : %i", otherGolbalNumber);
    return 0;
}
