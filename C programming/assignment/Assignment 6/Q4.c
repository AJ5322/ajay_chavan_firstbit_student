//Find odd and even among the numbers

void main () {
	int ptr[10],i;
	printf("Enter the elements\n");
	for (i=0; i<10; i++)
		scanf("%d",&ptr [i]);
	printf("[");
	for (i=0; i<10; i++)
		printf("%d,",ptr[i]);
	printf("\b]\n");
	printf("Even =");
	for (i=0; i<10; i++) {
		if (ptr[i]%2==0)
			printf("%d,",ptr[i]);
	}
	printf("\nOdd =");
	for(i=0; i<10; i++) {
		if (ptr[i]%2!=0)
			printf("%d,",ptr[i]);
	}


}
