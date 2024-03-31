// Task
// You need to do the following

// Run the code as is and read the error that you get
// Add parentheses around the condition and then re-run the code

#include <stdio.h>

int main() {
    int age = 25;
    int voting_age = 18;
    
    if (age >= voting_age) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.\n");
        printf("Wait for %d years", voting_age - age);
    }
    return 0;
}