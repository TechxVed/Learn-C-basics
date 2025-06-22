#include <stdio.h>

int main() {
    int x =15;
    int y = 7;
    float z = x/y; //(float)x/y for flaot value
    
                      /* return value in an int value as the division is performed earlier then it is assigned to flaot, we need to do explicit 
                      conversion for it. */
    printf("%f" , z);
    return 0;
}