// Chef and Brain Speed
// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors?
// If Chef is prone to errors print YES, otherwise print NO.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
    if(x<y) {
        printf("YES");
       }
    else {
    printf("NO");
    }
    return 0;
}
