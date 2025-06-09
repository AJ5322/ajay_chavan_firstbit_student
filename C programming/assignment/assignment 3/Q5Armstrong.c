#include<stdio.h>
void main(){
	 int n, original, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; 
    while (n != 0) {
        remainder = n % 10;                      
        result += remainder * remainder * remainder; 
        n = n / 10;                              
    }
    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

}
