#include <stdio.h>

int main(){
    int x,y;
    printf("Enter the two number\n");
    scanf("%d %d" ,&x,&y);
    printf("Select the operation to be performed\n 1 for addition\n 2 for subtraction\n 3 for multplication");
int o;
scanf("%d" , &o);
switch (o)
{
case 1 : printf("the result is %d" ,x+y );
    break;
case 2: printf("the result is %d" ,x-y );
    break;
case 3: printf("the result is %d" ,x*y );
    break;

default: printf("Invalid operation");
    break;
}
    return 0;
    
}