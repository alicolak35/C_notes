#include <stdio.h>


/*
#include <stdarg.h>
void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }
    va_end(args);
    printf("\n");
}

int main() {
    printNumbers(3, 1, 2, 3);  // Output: 1 2 3
    printNumbers(5, 10, 20, 30, 40, 50);  // Output: 10 20 30 40 50
    return 0;
}
*/

/*
int main(void)
{
    printf("%zu\n",sizeof (double));
    printf("%zu\n",sizeof (float));
}
*/
/*
int main(void)
{
    int a = 5;

    {
        double a = 3.3;
        if (a > 4)
        printf("%f dortten buyuktur\n", a);
        else    
        printf("%f dortten kucuktur\n", a);
    }
    printf("a sayisi %d idir\n", a);
    return 0;
}
*/
/*
//when a variable is declared in a scope, the variable will be accessible inside the scope(Scope can obtain inner scopes). If a variable cold not find in current scope, ıt will be searched in outer scopes. 
int main(void){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", i);
        {
            int i = 22;
            printf("%d\n", i);
        }
    }
}
*/

/*
//what happens if a string pushed into smaller lengthed array, could remain string elements reachable? 
void fonk(char *dest, char *source, int num)
{
    for (int i = 0; i<num; i++)
    {
        dest[i] = source[i];
    }
}
int main(void)
{
    char dizi[4];
    scanf("%s", dizi);
    char *p1 = dizi;
    
    char dizi_ek[7];
    fonk(dizi_ek, dizi, 7);
    
    char yeni_dizi[7] ;
    fonk(yeni_dizi, dizi, 7);
    
    char dizi_dizi[7];
    fonk(dizi_dizi, p1, 7);
    
}
*/