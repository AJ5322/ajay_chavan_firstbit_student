#include <stdio.h>

void  main() {
    int n = 5; 
    int i = 1;
    int fact = 1;

    while (i <= n) {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d  is  %d ", n, fact);

}
