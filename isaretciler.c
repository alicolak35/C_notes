#include <stdio.h>

void fonk(int a[], int len){
    while(len--)
        printf("%d ",a[len]);
    printf("\n");
}

#define LEN  3

int main(void){
    int dizi[LEN] = { 2, 3, 5};
    printf("%d\n ", *(dizi));
    int *adres = dizi;
    printf("%p ", adres++);
    printf("%p ", adres++);
    printf("%p ", adres++);
    printf("%p ", adres++);
    printf("%p ", adres++);
    printf("%p ", adres);
}