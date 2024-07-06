//to find the number of digits in the given integer.

#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    while (num != 0) {
        // Update your code below this line
        num /= 10;
        count++;
    }
    printf("%d", count);
    return 0;
}