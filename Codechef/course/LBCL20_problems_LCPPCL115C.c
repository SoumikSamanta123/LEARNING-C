//Write a program to print odd numbers between 10 to 20 on separate lines:
#include <stdio.h>

int main() {
    // Update the code below this line
    int i = 11;
    while (i < 20) {
        if(i%2==1){
        printf("%d\n",i);
        }
        i++;
    }
    return 0;
}