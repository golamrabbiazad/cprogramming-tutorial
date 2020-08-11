//
//  library_string.c
//  arrays
//

#include <stdio.h>
#include <string.h>

typedef union {
    int height;
    int weight;
    int longest;
    char class[20];
} box;

int main (void) {
//    box boxes[3] = {{2, 4, 6}, {5, 3, 5}, {7, 5, 7}};
    
//    int volume;
//
//    for(int i = 0; i < 3; i++) {
//        volume = boxes[i].height * boxes[i].weight * boxes[i].longest;
//        printf("The value of first volume is: %d\n", volume);
//    }
    
    box boxes;
    strcpy(boxes.class, "Hello print me and ");
    printf("%s\n", boxes.class);
    
    
}
