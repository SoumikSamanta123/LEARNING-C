// Input Format

// The first and only line contains a sentence, .

// Output Format

// Print each word of the sentence in a new line.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i=0;
    while(i<strlen(s)){
    (s[i]==' ')?printf("\n"):printf("%c",s[i]);
    i++;
    }
    return 0;
}