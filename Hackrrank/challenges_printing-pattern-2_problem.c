// Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

//                             4 4 4 4 4 4 4  
//                             4 3 3 3 3 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 2 1 2 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 3 3 3 3 4   
//                             4 4 4 4 4 4 4   
// Input Format
// The input will contain a single integer .
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int m = 0;
    for (int i = 1; i <= 2*n - 1; i++){
    for (int j = 1; j<=2*n-1; j++){
        int a = i;
        if(i>n) a = 2*n-i;
        int b = j;
        if(j>n) b = 2*n-j;
        if (a<b)
            m = a;
        else
            m = b;         
        printf("%d ",n + 1 - m);  
    }
    printf("\n");
}
    return 0;
}