//To sort a given array of strings into lexicographically increasing order or into an order in which the string with the lowest length appears first, 
//a sorting function with a flag indicating the type of comparison strategy can be written. The disadvantage with doing so is having to rewrite the function for every new comparison strategy.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const void* a, const void* b) {
    const char ** s1 = (const char**)a;
    const char ** s2 = (const char**)b;
    return strcmp(*s1, *s2);
}

int lexicographic_sort_reverse(const void* a, const void* b) {
    const char ** s1 = (const char**)a;
    const char ** s2 = (const char**)b;
    return strcmp(*s1, *s2)==1?0:1;
}

int distinct_char(const char *s) {
  char dict[26] = {0};
  int counter = 0;
  for (int i = 0; i < strlen(s); i++) {
    dict['z' - s[i]] = 1;
  }
  for (int i = 0; i < 26; i++) {
    if (dict[i] == 1)
      counter++;
  }
  return counter;
}

int sort_by_number_of_distinct_characters(const void *a, const void *b) {
  const char **s1 = (const char **)a;
  const char **s2 = (const char **)b;
  int i = distinct_char(*s1);
  int j = distinct_char(*s2);
  if (i>j){ return 1;}
  if (i<j){ return 0;}
  if(i==j){
        return(lexicographic_sort(a,b));
  }
  return 0;
}



int sort_by_length(const void* a, const void* b) {
    
  const char **s1 = (const char **)a;
  const char **s2 = (const char **)b;
    int i = strlen(*s1);
    int j = strlen(*s2);
    if (i>j){ return 1;}
    if (i<j){ return 0;}
    
    if(i==j){
        return(lexicographic_sort(a,b));
    }
    
    return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const void* a, const void* b)){
    qsort(arr, len, sizeof(char*), cmp_func);
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}