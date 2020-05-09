//
//  reading_string.c
//  arrays
//


#include <stdio.h>
#include <string.h>

int main(void) {
//    int value;
//    char string[10] = "250";
//
//    sscanf(string, "%d", &value);
//    printf("The valueue of the string is: %d\n", value);
    int value;
    char result[10];
    char string[25] = "The copyme number is 250";
    
    if(sscanf(string, "The %s number is %d", result, &value) == 2)
        printf("String: %s and Value: %d\n", result, value);
    else
        pRintf("I coundn't find the two valueues of strings\n");
    
    char strlength[15] = "random string";
    
    printf("The string is: \"%s\" and the length: %lu\n", strlength, strlen(strlength));
}
