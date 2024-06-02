#include <stdio.h>

struct point
{
    int i;
    char c;
    struct point *ptr;
};

// int print(struct point var) {
//     printf("%d %c %d\n", var.i, var.c, var.ptr);
// }

int main()
{
    /* Self Referential Structure :
        -> Self Referential Structure are those structures in which one or more pointers points to the structure of the same type.
    */

    struct point var1;
    var1.i = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    printf("%d %c %d\n", var1.i, var1.c, var1.ptr);

    struct point var2;
    var2.i = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    printf("%d %c %d\n", var2.i, var2.c, var2.ptr);

    var1.ptr = &var2;
    printf("%d %c\n", var1.ptr->i, var1.ptr->c);

    return 0;
}