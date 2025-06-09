#include <stdio.h>
#include <math.h>

void  main() {
    int n, i, j, temp, num, rem, digits, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        digits = 0;

        for (j = temp; j > 0; j = j / 10) {
            digits++;
        }

        sum = 0;

        for (j = temp; j > 0; j = j / 10) {
            rem = j % 10;
            sum += pow(rem, digits);
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }


}
