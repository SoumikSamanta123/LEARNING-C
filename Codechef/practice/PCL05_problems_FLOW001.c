// Add Two Numbers
// Your task is very simple: given two integers 
// A and B, write a program to add these two numbers and output the sum.
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int a, b;

        scanf("%d %d", &a, &b);

        // Your code for each test case goes here 
        printf("%d\n", a+b);
    }

    return 0;
}