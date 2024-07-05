#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle aux;
    double An, An_1, p;
    int i, j;
    
   for(j=0; j< n; j++)
   {
        for(i = 0; i < n; i++)
    {
        p = 0.5*((tr[i].a) + (tr[i].b) + (tr[i].c));
        An = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        
        if(An < An_1 && i > 0)
        {
            aux = tr[i];
            tr[i] = tr[i - 1];
            tr[i - 1] = aux;  
        }
        
        An_1 = An;  
    }
   }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}