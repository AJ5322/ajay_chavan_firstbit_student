#include <stdio.h>

void  main() {
    int marks;

    // Take input from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check result using if-else
    if (marks > 75) {
        printf("Result: Distinction\n");
    } else if (marks > 65) {
        printf("Result: First Class\n");
    } else if (marks > 55) {
        printf("Result: Second Class\n");
    } else if (marks >= 40) {
        printf("Result: Pass Class\n");
    } else {
        printf("Result: Fail\n");
    }

}
