//
//  string_comp.c
//  arrays


#include <stdio.h>
#include <string.h>

int main(void) {
    
    char str1[10] = "first";
    char str2[10] = "fIrs";
    
    // there is a short version using string.h library.
    
    // there are two version of strcmp and strncmp is -> strcasecmp and strncasecmp <= it is better to ignore because they produce the same value as short one!
    
    if(strncmp(str1, str2, 2) == 0)
        printf("Two strings are identical.\n");
    else
        printf("Two strings are different.\n");
    
//    char *ptr1 = str1, *ptr2 = str2;
//
//    while(*ptr1 != 0 && *ptr2 != 0) {
//        if(*ptr1 != *ptr2) break;
//        ptr1++;
//        ptr2++;
//    }
//
//    if(*ptr1 == 0 && *ptr2 == 0)
//        printf("Two string are identical\n");
//    else
//        printf("Two strings are different\n");
    
}
