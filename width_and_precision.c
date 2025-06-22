#include <stdio.h>

int main(){
   /* int x = 135;
    char name[20] ="ved";
    float y = 1382.532;

    printf ("%8d\n %8s\n %8f\n" , x , name , y);  // this is width = minimun number of char in output. */



  /*  int x = 135;
    char name[20] = "ved";
    float y = 1382.532;

    printf ("%08d\n %08s\n %08f\n" , x , name , y);  // zero before width add zeroes in starting */



    int x = 135;
    char name[20] = "ved";
    float y = 1382.532;

    printf ("%.2d\n %.2s\n %.2f\n" , x , name , y);  // this is precision = maximun numvber of strings
    return 0;
}