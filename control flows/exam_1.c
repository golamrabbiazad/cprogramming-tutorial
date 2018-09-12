#include <stdio.h>

int main() {
    int result = 20;
    int temp = 10;
    char op = '*';

    switch (op) {
    case '+':
    result += temp;
    break;

    case '*':
    result += temp;

    case '-':
    result -= temp;
    break;

    default:
    result =0;
} 
    printf("result of op is : %d", result);
    return 0;
}