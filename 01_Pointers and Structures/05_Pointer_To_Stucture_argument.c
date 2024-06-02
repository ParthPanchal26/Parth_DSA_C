#include<stdio.h>

struct point {
    int x; 
    int y;
};

int print(struct point *ptr) {
    printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
    // If the size of the structure is very large then passing the copy of the whole structure is not efficient.
    // So it is recommended to pass the address of the structure.
    // Use the arrow(->) operator to access the structure members inside the called function.

    struct point p1 = {12, 34};
    struct point p2 = {56, 78};
    print(&p1);
    print(&p2);
    return 0;
}