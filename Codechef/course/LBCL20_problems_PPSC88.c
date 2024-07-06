//to write a code which checks if a given number is prime.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 1) 
        printf("No\n");
    else if (n == 2)
        printf("Yes\n");

    int j = 1;
    int i = 2;

    // Check divisors from 2 up to n/2
    while ( i <= n / 2 ) {
    i++;    
    if (n % i == 0) {
            j = 0; // n is not a prime number
            break;
        }
    }

    if (j) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}   
