#include <stdio.h>

void  main() {
    int n = 120581;     
    int temp = n;
    int reversed = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    if (reversed == n)
        printf("%d is a Palindrome number\n", n);
    else
        printf("%d is NOT a Palindrome number\n", n);

}
