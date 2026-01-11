/*
This source code is product of "stddef.h"
*/

#include <stddef.h>
#include <stdio.h>

struct S{
    char c;
    short b;
    double d;
};

// sizeArray > PTRDIFF_SIZE && sizeArray <= SIZE_MAX
int main(void){
    printf("%zu\n", offsetof(struct S, b));
    printf("%zu\n", offsetof(struct S, c));
    printf("%zu\n", offsetof(struct S, d));
    struct S tip;
    
    int* c =(int*)&(tip.c);
    int* b =(int*)&(tip.b);
    int* d =(int*)&(tip.d);
    // the difference between d and b is 6 bytes which i expect 8 bytes.
    
    // typedef long int ptrdiff_t
    printf("%ld\n", (ptrdiff_t)&(tip.d) - (ptrdiff_t)&(tip.b));

    return 0;
}


