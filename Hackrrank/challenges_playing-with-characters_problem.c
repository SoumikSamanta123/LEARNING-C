// This challenge will help you to learn how to take a character, a string and a sentence as input in C. To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    char s[100];
    scanf("%s\n", s);
    printf("%s\n", s);
    
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
