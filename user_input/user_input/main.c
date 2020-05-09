//
//  main.c
//  user_input
//

#include <stdio.h>

int main(void) {
    int age;
    char name[256], input[256];
    
    printf("What is your name, user?\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", name);
    
    printf("Hello, %s. What's your age?\n", name);
    
    while (1) {
        fgets(input, 256, stdin);
        if(sscanf(input, "%d", &age) == 1) break;
        printf("I don't recognize that as an age - try again!\n");
    }
    
    printf("Well, %s you are looking young at the age of %d\n", name, age);
}
