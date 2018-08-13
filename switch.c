#include <stdio.h>

int main() {
    /* This is all about switch case related program. */
    int number2 = 10, number3 = 20;
    char operation = '*';
    
    switch (operation) {
        case '-':
        number2 = number2 - number3;
        break;

        case '+':
        number2 = number2 + number3;
        break;

        case '*':
        number2 = number2 * number3;
        break;

        case '/':
        number2 = number2 / number3;
        break;

        default:
           printf("Sorry! Invalid the result.");
    }
    printf("The result will be %i \n", number2);
    return 0;
}
