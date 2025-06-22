#include <stdio.h>

int main() {
    int x;
    int y;
    printf("write any two numbers\n");
    scanf("%d %d" , &x , &y);
int c;
 c = x; 
 x = y; 
 y = c;  

printf ("%d %d " ,x ,y );

}