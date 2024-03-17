// Alice and Marks
// Alice has scored 
// X marks in her test and Bob has scored 
// Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
    if (x >=2*y){
    printf("YES");
    }
    else
    printf("NO");
    return 0;
}