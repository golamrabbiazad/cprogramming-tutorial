//
//  main.c
//  user_input
//

#include <stdio.h>
#include <string.h>

typedef union {
    int id_num;
    char name[20];
} id;

void set_id(id *item);
void show_id(id item);

int main(void) {
    id item;
    
    set_id(&item);
    show_id(item);
    
    return 0;
}


void set_id(id *item) {
    item->id_num = 43;
}

void show_id(id item) {
    printf("ID: %d\n", item.id_num);
}
