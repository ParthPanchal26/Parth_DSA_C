#include<stdio.h>

struct point {
    int a;
    int b;
};

int print(struct point arr[]) {
    int i;
    for(i = 0; i < 2; i++) {
        printf("%d %d\n", arr[i].a, arr[i].b);
    }
}

int main() {
    struct point arr[2] = {{1, 2}, {3, 4}};
    print(arr);

    return 0;
}