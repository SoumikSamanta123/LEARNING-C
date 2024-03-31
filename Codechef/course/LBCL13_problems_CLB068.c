// Task
// Some code is written in the editor.

// Two variables r and k are defined.
// Output based on these conditions:
// If r is greater than k, output "Ram is heavier than Karan"
// If r is less than k, output "Karan is heavier than Ram"
// Otherwise, output "Ram & Karan have the same weight!"
#include <stdio.h>

int main() {

    int r = 24;
    int k = 32;
    
    if (r > k) {
        printf("Ram is heavier than Karan.\n");
    } else if (r < k) {
        printf("Karan is heavier than Ram\n");
    } else {
        printf("Ram & Karan have the same weight!\n");
    }
    
    r = 78;
    k = 78;
    if (r > k) {
        printf("Ram is heavier than Karan.");
    } else if (r < k) {
        printf("Karan is heavier than Ram");
    } else {
        printf("Ram & Karan have the same weight!");
    }
    return 0;
}
