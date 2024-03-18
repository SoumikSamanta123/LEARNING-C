//In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. 
//The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a=0;
  int o=0;
  int x=0;
  for(int i=1;i<=n;i++) {
      for(int j=i+1;j<=n; j++) {
        int p=j&i;
        int q=j|i;
        int r=j^i;
        if(p>a && p<k)
            {
                a=p;
            }
        if (q>o && q<k) 
            {
                o=q;
            }
        if (r>x && r<k) 
            {
                x=r;
            }
      }
  }
  printf("%d\n%d\n%d",a,o,x);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}