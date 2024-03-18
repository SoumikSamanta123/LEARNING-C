// Task
// Write a program which does the following

// Create a variable txt and assign it the text "NumeroTres"
// Use the strlen() function to output to the console the number of characters in txt.
#include <stdio.h>
#include <string.h>

int main() {

    char txt[] = "NumeroTres";
    int a = strlen(txt);
    printf("The length of the word is: %d", a);
    return 0;
}