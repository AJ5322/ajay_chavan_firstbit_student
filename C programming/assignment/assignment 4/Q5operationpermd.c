#include <stdio.h>

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (1) {
        int i, temp, rem, sum = 0, rev = 0, isPrime = 1;
        printf("\nMENU:\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime or Not\n");
        printf("3. Check Palindrome or Not\n");
        printf("4. Check Positive, Negative or Zero\n");
        printf("5. Reverse the Number\n");
        printf("6. Sum of Digits\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
        }

        else if (choice == 2) {
            if (num <= 1)
                isPrime = 0;
            else {
                for (i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
                printf("%d is a Prime number\n", num);
            else
                printf("%d is not a Prime number\n", num);
        }

        else if (choice == 3) {
            temp = num;
            while (temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }
            if (rev == num)
                printf("%d is a Palindrome number\n", num);
            else
                printf("%d is not a Palindrome number\n", num);
        }

        else if (choice == 4) {
            if (num > 0)
                printf("%d is Positive\n", num);
            else if (num < 0)
                printf("%d is Negative\n", num);
            else
                printf("The number is Zero\n");
        }

        else if (choice == 5) {
            temp = num;
            while (temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }
            printf("Reversed number = %d\n", rev);
        }

        else if (choice == 6) {
            temp = num;
            while (temp != 0) {
                rem = temp % 10;
                sum += rem;
                temp = temp / 10;
            }
            printf("Sum of digits = %d\n", sum);
        }

        else if (choice == 0) {
            printf("Exiting program.\n");
            break;
        }

        else {
            printf("Invalid choice! Please enter between 0-6.\n");
        }
    }

    return 0;
}
