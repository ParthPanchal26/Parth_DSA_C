#include<stdio.h>

int main() {
    
    /* ... Void Pointers ... 
        -> Void pointer is a poiner which has no associated data type with it.
        -> It can point to any data type and can be typecasted to any type.
    */

    
    int n = 10;
    void *ptr = &n; // Void pointer declared.

    printf("%d", *(int*)ptr); // Type casted with integer.
    return 0;
}