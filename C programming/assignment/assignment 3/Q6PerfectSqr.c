#include <stdio.h>

void  main() {
    int n = 208; 
    int i = 1;
    int sum = 0;
    while(i <= n / 2) {
        if(n % i == 0) {
            sum += i;
        }
        i++;
    }

    if(sum == n) {
        printf("Perfect square \n");
    } else {
        printf("Not Perfect square \n");
    }

}
