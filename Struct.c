#include <stdio.h>

typedef struct bebe{
    double hol;
    int yut;
}yuhha;
/* Structs in C are just blueprints; initialization happens when you create an instance. 
typedef struct bebe{
    double hol = 0.0;
    int yut;
}yuhha;

yuhha var1 = {0.0, 10};  // Correct way

yuhha init(){
    return (yuhha){.hol=0.0, .yut=43}
}
*/

/* 
Older debuggers have the information of struct name, how much space will occupy in the memory etc. Describing a new struct that is
defined for a new project, new struct should be renamed from older. 
typedef struct QueueDefinition //The old naming convention is used to prevent breaking kernel aware debuggers. 
{
    .... some codes
}xQUEUE;

typedef xQUEUE Queue_handle_t;
*/

/*
typedef struct bebe{                    
    double hol;                   
    int yut;
}yuhha;
**A new struct can be defined in two ways;
1- struct bebe yutar;
2- yuhha tutar; 

and typedef struct{
    double hol;
    int yut;
}yuhha;
**Second definition is anonymous which if a new struct object is aimed to define => 'typedef yuhha kurt'
*/
yuhha yuh;
struct bebe gut;

  


int main(void){
    yuh.hol = 65.332;
    printf("%.3f\n", gut.hol);
    
    typedef yuhha juter;

    //juter.hol = 33;
    juter kalamar;

}