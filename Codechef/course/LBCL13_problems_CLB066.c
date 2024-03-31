// Task
// Write a program which does the following

// Take input for two integer variables a & b
// Output "Coding is Fun" to the console if a is greater than b.
#include <stdio.h>

int main() {
	// your code goes here
	int a,b;
	scanf("%d %d", &a,&b);
	
    if (a>b){
        printf("Coding is Fun");
    }
    else{
        printf(" ");
    }
    return 0;
}