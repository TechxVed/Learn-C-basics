#include <stdio.h> 
int x = 10; // this is global variable
int main() {
 {                                             /*from here 
    int x = 20; // this is variable in scope     to here is SCOPE*/
 }
    int x =30; // this is local variable

    printf("%d" , x);

return 0;
}
