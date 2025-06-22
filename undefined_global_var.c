#include <stdio.h> 
      int x;       // undefined golabal vairablel will return 0 in int , /0 in char , 0.0 in flaot.
int main () {
    int x;         // undefined local variabel will return garbage value in int, char and flaot too.
    printf("%d" , x);
return 0;
}