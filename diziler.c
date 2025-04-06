#include <stdio.h>

/*
#if !defined(FOO) && defined(BAR)
#warning "BAR requires FOO."//causes the preprocessor to issue a warning and continue preprocessing
#endif
*/
#define  HEY  0
/* Functions must be used inside a function.*/

int main(void){
    
    char dizi[][16] = {"freq", "kal", "ciks"};
    for(int i=0;i<4;i++)
        printf("%c", dizi[0][i]);
    printf("\n");
    return 0;
}
