//
//  strings.c
//  arrays


#include <stdio.h>


int main(void) {
    //    char mystring[10] = "thestring";
    //
    //    printf("the last character of the string is: %c\n", mystring[9]);
    //    // it will return zero at the last index of the string.
    
    char str1[10] = "first";
    char str2[10] = "second";
    char str3[20];
    
    // shortcut version using string.h library
    
    // strcpy(target, source); strcpy -> string copy
    // strcpy(str3, str1);
    
    // strcat(target, source); strcat -> string concat
    // strcat(str3, str2);
    
    // now print the str3!
    
    // without using string library
    char *src, *dst;
    
    src = str1;
    dst = str3;
    
    while(*src != 0) {
        *dst = *src;
        src++;
        dst++;
    }
    
    src =str2;
    
    while(*src != 0) {
        *dst = *src;
        src++;
        dst++;
    }
    
    *dst = 0;
    
    printf("%s + %s = %s\n", str1, str2, str3);

}
