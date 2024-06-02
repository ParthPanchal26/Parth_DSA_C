#include<stdio.h>

struct var {
    int x;
    int y;
};

void print(struct var p) {
    printf("%d %d\n", p.x, p.y);
}

int main() {
    /* Instead of passing structure members individually, it is better to pass a structure variable as an argument */

    struct var p1 = {12, 34};
    struct var p2 = {78, 56};
    print(p1);
    print(p2);

    return 0;
}