
//Write a program to print factors of number in given range.
#include <stdio.h>
void main () {
	int start,end,i,j;
	printf("Enter the starting range :");
	scanf("%d",&start);
	printf("Enter the ending range :");
	scanf("%d",&end);

	for(i=start; i<=end; i++) {
		printf("%d=",i);
		for(j=1; j<=i; j++) {
			if (i%j==0)
				printf("%d,",j);
		}
		printf("\n");

	}
}

