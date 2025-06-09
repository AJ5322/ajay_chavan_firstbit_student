#include <stdio.h>

void main() {
    int start, end, sum = 0;
    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);
    int i=start;
    while ( i<=end) {	
        sum += i;
		i++;
    }
    printf("Sum is = %d\n", sum);


}
