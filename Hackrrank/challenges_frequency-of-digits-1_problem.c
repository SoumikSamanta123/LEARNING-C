// Input Format
// The first line contains a string,  which is the given number.
// Constraints
// All the elements of num are made of english alphabets and digits.

// Output Format
// Print ten space-separated integers in a single line denoting the frequency of each digit from to.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    int n[10]={};
    int temp,a;
    
    do{
        a = scanf("%c",&c);
        temp = c-48;
        if(temp<10) 
            n[temp]++;
    }
    while(a>=1);
        for(temp=0;temp<10;temp++){
        printf("%d ",*(n+temp));
        }    
    return 0;
}