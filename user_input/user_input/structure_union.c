//
//  main.c
//  user_input
//

#include <stdio.h>
#include <string.h>

typedef struct{
    char make[20];
    int model_year;
    int id_type;
    union {
        int id_num;
        char VIN[20];
    } id;
} vehicles;


int main(void) {
    vehicles car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2020;
    car1.id_type = 30;
    
    car1.id.id_num = 123098;
    strcpy(car1.id.VIN, "You got me");
    
    printf("Car %s, %d\n", car1.make, car1.model_year);
    
    if (car1.id_type == 0)
        printf("ID: %d\n",car1.id.id_num);
    else
        printf("ID: %s\n", car1.id.VIN);
    
    return 0;
    
}
