#include<stdio.h>

struct charSet {
    char s;
    int i;
};

void keyValue(char* s, int* i) {
    scanf("%c %d", s, i);
}

int main() {
    struct charSet cs;
    keyValue(&cs.s, &cs.i);
    printf("%c %d", cs.s, cs.i);
    return 0;
}