//
//  user_inp.c
//  user_input

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int num;
    char *info;
} record;

int main(void) {
    record *recs;
    int num_recs = 2;
    char str[] = "This is information!";
    
    recs = calloc(num_recs, sizeof(record));
    if(recs != NULL) {
        for(int k = 0; k < num_recs; k++) {
            (recs+k)->num = k;
            (recs+k)->info = malloc(sizeof(str));
            strcpy((recs+k)->info, str);
        }
    }
    for(int k = 0; k < num_recs; k++) {
        printf("%d\t%s\n", (recs+k)->num, (recs+k)->info);
    }
    printf("The record size: %lu\n", sizeof(record));
    free(recs);
    
    return 0;
}
