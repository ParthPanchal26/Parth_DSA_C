#include<stdio.h>

struct point {
    int x;
    int y;
};

struct point edit(struct point p) {
    (p.x)++;
    p.y += 5;
    return p;
}

int display(struct point p) {
    printf("%d, %d\n", p.x, p.y);
}

int main() {
    struct point p1 = {1, 2};
    struct point p2 = {3, 4};
    p1 = edit(p1);
    p2 = edit(p2);

    display(p1);
    display(p2);

    return 0;
}