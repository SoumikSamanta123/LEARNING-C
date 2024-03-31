// Input Format

// The first line contains an integer, .
// The next line contains  space-separated integers.

// Output Format

// Print the sum of the integers in the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b=0;
    scanf("%d",&a);
    for (int i=a;i>=1;i--)
    {
    int c;
    scanf("%d",&c);
    b=b+c;
    }
    printf("%d",b);    
    return 0;
}