#include <stdio.h>
#include <string.h>
#include <stdint.h>

/*
int main(void)
{
    
float temp = 23.65;
char buffer[10] = { 0 };
char tab_char = '\t' ;

int kent = snprintf(buffer, sizeof(buffer),"%.2f", temp);
buffer[kent] = tab_char;

}
*/

/*
printf("string")

It can potentially overwrite different data and data type. to prevent it, format specifiers are using.(Uncontrolled format string)
*/

int main(void){

    char a[4];
    printf("Kulac\r");//Kulac'in ustune yazmaya baslar
    printf("Kulac\n");//yeni satirin basina gecer
    printf("Kulac\n\r");//yeni satirin en basina imleci tasir
    scanf("%s\r",a);
    printf("%s\n", a);
}

