// Task
// Write a program which does the following

// Take two integers b and r as input
// Print "Rob scored higher marks than Bob", if r is greater than b
// Print "Bob & Rob both scored the same", if both b and r are equal
#include <stdio.h>

int main() {
    int b, r;
    scanf("%d", &b);
    scanf("%d", &r);
    if (r>b) {
        printf("Rob scored higher marks than Bob\n");
    }
    else if (r=b) {
        printf("Bob & Rob both scored the same");
    }
    return 0;
}
