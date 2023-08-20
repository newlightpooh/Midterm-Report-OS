#include <stdio.h>
#include <stdlib.h>

void recursive_function(int n) {
    int local = n; 
    printf("Recursive function with n = %d at address %p\n", n, &local);

    if (n > 0) {
        recursive_function(n - 1);
    }
}

int x = 1;
int y ;
int z = 3;

int main() {  
    
    printf("data x at address %p\n", (void*)&x); 
    printf("data y at address %p\n", (void*)&y); 
    printf("data z at address %p\n", (void*)&z); 

    recursive_function(4);

    int* a = (int*)malloc(sizeof(int));
    int* b = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));

    printf("Heap a at address %p\n", (void*)a);
    printf("Heap b at address %p\n", (void*)b);
    printf("Heap c at address %p\n", (void*)c);

    free(a);
    free(b);
    free(c);

    return 0;
}

// gcc -o malloc malloc.c
// ./malloc

