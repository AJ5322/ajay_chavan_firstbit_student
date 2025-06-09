#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    while(n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int num, originalNum, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is not a Strong number.\n", originalNum);
    }

    return 0;
}

