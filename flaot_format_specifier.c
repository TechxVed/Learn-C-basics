#include <stdio.h>

int main(){
   /* float x = 15e4;
    printf("%f" , x);  // %f converts it in integer and return upto 6 digit */


    /* float x = 25e4;
    printf("%e" , x);  // %e always convert value to first digit.remaning value then e+xy where xy is power    */



    float x = 15e4;
    printf("%g" , x);  // %g switches between %f anf %e and allows only the 6 didgit in total terminates the remanining
    return 0;
}