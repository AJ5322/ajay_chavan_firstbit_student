#include <stdio.h>
void  main() {
    int n = 45;
    int temp = n;
    int last = temp % 10;
    int first;
    while (temp >= 10) {
        temp = temp / 10;
    }
    first = temp;

    int sum = first + last;

    printf("Sum of first and last digit of %d is %d\n", n, sum);

}
