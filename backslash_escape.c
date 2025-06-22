#include <stdio.h>

int main(){
   /* printf("My name is "ved dandotia"");  this will throw error as the double qoute before ved will be read as end of the string by the compiler.  so hoe do we print the specia character in as printf function?
   The answer is simple \(backslash), anything after backlash will be a escape character means the compile will escape reading that and move jump further. */
       

      printf("My name is \"ved dandotia\"\n");
      printf("I am learning C from \"Geeks for geeks\"");

    return 0;
}