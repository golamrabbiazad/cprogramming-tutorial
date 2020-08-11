//
//  access_ptr.c
//  arrays
//
//  Created by user on 4/17/20.
//  Copyright © 2020 user. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours;
}course;


void update_course(course *class);
void show_course(course class);


int main() {
    course cs2;
    
    update_course(&cs2);
    show_course(cs2);
}

void update_course(course *class) {
    class->hours = 11.2;
    class->id = 24;
    strcpy(class->title, "C++");
}

void show_course(course class) {
    printf("This %s of student id: %d\n",class.title, class.id);
    printf("And it is %2.1f hours long\n", class.hours);
}
