// Hello user
// Write a program which does the following

// Declare a string variable x
// Accept a text user input - the name of the user - and store it in the variable x
// Output and print to the console "Hello" before the user defined name.
// Remember to add a space between "Hello" and x

#include <stdio.h>

int main() {

    char x[10];
    
    // Take user input in variable x
    scanf("%s", x);
    
    // Print greeting
    printf("Hello %s", x);
    
    return 0;
}