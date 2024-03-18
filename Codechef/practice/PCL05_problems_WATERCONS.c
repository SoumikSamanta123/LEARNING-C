// Water Consumption
// Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.

// Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.

// Input Format
// The first line contains a single integer 

// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer 

// X — the amount of water Chef drank today.
// Output Format
// For each test case, output YES if Chef followed the doctor's advice of drinking at least 2000 ml of water. Otherwise, output NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x;
        scanf("%d", &x);

        // Your code for each test case goes here
        if(x>=2000)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
