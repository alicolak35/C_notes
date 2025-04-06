#include <stdio.h>


void fonk(int a[], int len){
    while(len--)
        printf("%d ",a[len]);
    printf("\n");
}

#define LEN  3
int main(void){
    long dizi[LEN] = { 2, 3, 5};
    printf("%ld\n ", *(dizi));
    int *adres = dizi;
    printf("dizi adresi= %p\n", dizi);
    printf("int adres adresi= %p\n", ++adres);
    printf("dizi isaretci adresi + 1 = %p\n", dizi + 1);
    printf("%d ", *(adres));
}