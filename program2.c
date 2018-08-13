#include  <stdio.h>

int main () {
    /* local variable defination */
    char grade = 'F';
    switch (grade) {
        case 'A':
        printf("Excellent! \n");
        break;
        case 'B':
        printf("Great job! \n");
        break;
        case 'C':
        printf("Well done! \n");
        break;
        case 'D':
        printf("You Passed!\n");
        break;
        case 'F':
        printf("Better try again \n");
        break;
        default:
        printf("Invalid grade \n");
    }
    printf("Your grade is %c \n", grade);
    return 0;
}

