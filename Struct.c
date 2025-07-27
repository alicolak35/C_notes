#include <stdio.h>

/* 
Older debuggers have the information of struct name, how much space will occupy in the memory etc. Using and existing struct 
to describe a new struct is beneficial for compatibility. For eg.
 
typedef struct QueueDefinition //The old naming convention is used to prevent breaking kernel aware debuggers. 
{
    .... some codes
}xQUEUE;

typedef xQUEUE Queue_handle_t;
*/

/*
typedef int Word;
typedef Word Int;

int main(void)
{
    Word a = 7;
    Int b = 3;

    printf("%d\n", a + b); //a constant must be used to initilize and static lifed variable

    return 0;
}
*/

/*
typedef int* Iptr;
#define IPTR    int*

int main(void)
{
    Iptr a, b;//int* a; int* b;
    int* d, e;//int* d; int e;
    IPTR f,g;//int* f; int g;
    
    int c = 5;
    
    a = b = &c;
    d = e = &c;
    f = g = &c;
    
    return 0;
}
*/

/*
//since programmer declares type of each object, there is no feature of learning the type of an object during compile time 
typedef int Int5[5];

int main(void)
{
    int a[5] = { 0 };//type of "a" is "int [5]"
    Int5 b = { 0 };
    
    return 0;
}
*/

int main(void)
{
    int a[5], b[5], c[5];

    for (int i = 0; i< (sizeof a / sizeof a[0]); i++){
        a[i] = b[i] = c[i] = i;//assignment(=) operator has right to left precedence
        //(a[i] = (b[i] = (c[i] = i)));
    }
}
