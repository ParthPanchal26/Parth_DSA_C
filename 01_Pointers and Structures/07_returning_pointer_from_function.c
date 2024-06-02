#include<stdio.h>

struct point {
    int x;
    int y;
};

struct point* fun(int a, int b) {
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr -> x = a + 1;
    ptr -> y = b + 5;
    return ptr;
}

void print(struct point *ptr) {
    printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
    struct point *p1, *p2;
    p1 = fun(1, 2);
    p2 = fun(3, 4);
    print(p1);
    print(p2);
    free(p1);
    free(p2);

    return 0;
}