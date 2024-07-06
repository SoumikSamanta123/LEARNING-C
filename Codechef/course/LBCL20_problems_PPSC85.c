//to write a code using while loops to output the sum of all integers from 1 to N.
// Debug the code below to solve the problem

#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    int i=1;
    while (i <= N) {
        sum += i;
        i++;
    };
    
    printf("%d", sum);
    return 0;
}