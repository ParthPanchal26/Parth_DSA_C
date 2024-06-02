/*  Passing Studcture members as argument
    -> Just like variables we can pass structure members as arguments to a function.

*/ 


#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[10];
    int age;
    int roll_No;
    float spi;
};

int print(char name[], int age, int roll_no, float spi) {
    printf("\nName : %s \nAge : %d \nRoll No. : %d \nspi : %.1f\n", name, age, roll_no, spi);
}

int main() {
    struct student s1 = {"Parth", 18, 15, 9.55};
    print(s1.name, s1.age, s1.roll_No, s1.spi);

    return 0;
}