#include <stdio.h>

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