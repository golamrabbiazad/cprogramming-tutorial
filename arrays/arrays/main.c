//
//  main.c
//  arrays
//
//  Created by user on 4/14/20.
//  Copyright © 2020 user. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *);

int main(int argc, const char * argv[]) {
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;
    
    num = sizeof(arr) / sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *) arr, num, width, compare);
    
    printf("The sorted numbers are: ");
    for (i = 0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


int compare (const void *el1, const void *el2) {
    if((*(int *)el1) == (*(int *)el2)) return 0;
    else if ((*(int *)el1) < (*(int *)el2)) return -1;
    else return 1;
}

