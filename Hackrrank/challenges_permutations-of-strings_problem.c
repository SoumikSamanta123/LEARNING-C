#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int next_permutation(int n, char **s) {
    int i, j;

    // Find the rightmost string which is smaller than the string next to it
    for (i = n - 2; i >= 0; i--) {
        if (strcmp(s[i], s[i + 1]) < 0)
            break;
    }

    // If no such string is found, then the array is the last permutation
    if (i < 0)
        return 0;

    // Find the smallest string on the right side of (i) that is greater than s[i]
    for (j = n - 1; j > i; j--) {
        if (strcmp(s[j], s[i]) > 0)
            break;
    }

    // Swap the found strings
    swap(&s[i], &s[j]);

    // Reverse the substring to the right of (i)
    int left = i + 1, right = n - 1;
    while (left < right) {
        swap(&s[left], &s[right]);
        left++;
        right--;
    }

    return 1;
}
int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}