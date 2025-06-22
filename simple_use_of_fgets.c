#include <stdio.h>

int main(){
    char name[50];

   /* printf("Enter your name:");
    scanf("%s" , &name);
    printf("Your name is: %s", name); */ // here scanf only use return the first name as the scanf terminate after the space thats why fgest is used.

    printf("Enter your name:");
    fgets(name , 50 , stdin);           // fgets retuen the full name.
    printf("your name is: %s" , name);
    return 0;
}