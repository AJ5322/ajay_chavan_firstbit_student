#include <stdio.h>

void  main() {
    int age;

  
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Category: Child\n");
    } else if (age >= 12 && age <= 19) {
        printf("Category: Teenager\n");
    } else if (age >= 20 && age <= 59) {
        printf("Category: Adult\n");
    } else {
        printf("Category: Senior\n");
    }


}
