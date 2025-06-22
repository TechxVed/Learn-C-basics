#include <stdio.h> 

int main() {
    const float x = 1.23;
x = x*2;     // Error beacuse its now a read only variabe due to const.
printf("%f", x);
return 0;
}