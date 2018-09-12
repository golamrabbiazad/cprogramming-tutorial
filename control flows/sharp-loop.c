#include <stdio.h>

int main()
{
    /* code */
    int c = 10;
    
    while(c > 0){
        /* code */
        puts("I must not write code in class.");
        c = c - 1;
    }
    
    return 0;
}


int main(int argc, char const *argv[])
{
    /* code */
    char ex[20];
    puts("Enter your boyfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s, \n\n\tYour're history.\n", ex);
    return 0;
}


int main(int argc, char const *argv[])
{
    /* code */
    char suit = 'H';

    switch(suit) {
        case 'C':
            puts("Clubs");
        break;

        case 'D':
            puts("Diamonds");
        break;

        case 'H':
            puts("Hearts");
        break;

        default: 
            puts("Buy Muri & eat Muri");
    }
    return 0;
}
