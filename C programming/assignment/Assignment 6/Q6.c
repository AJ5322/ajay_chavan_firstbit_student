//Accept array and print only prime numbers of array

void main () {
	int ptr[10],i,j;
	printf("Enter the elements\n");
	for (i=0; i<10; i++)
		scanf("%d",&ptr [i]);
	printf("[");
	for (i=0; i<10; i++) {
		int count=0;
		for (j=2; j<ptr[i]; j++) {
			if (ptr[i]%j==0) {
				count=1;
				break;
			}
		}
		if (count==0)
			printf("%d,",ptr[i]);
	}
	printf("\b ]\n");
}
