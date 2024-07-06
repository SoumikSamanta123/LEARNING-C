//code using WHILE loops to output the factorial of N.
// Debug the code below to solve the problem

#include <stdio.h>

int main() {
    int N, factorial = 1;
    scanf("%d", &N);

    int i = 1;
    while (i <= N) {
        factorial *= i;
        ++i;
    }
    printf("%d", factorial);
    return 0;
}