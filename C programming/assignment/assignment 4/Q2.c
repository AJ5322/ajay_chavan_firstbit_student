//Print prime numbers in the given range 1 to n.

void main () {
	int num,i,j;
	printf("Enter the number ");
	scanf("%d",&num);
	for (j=2; j<num; j++) {
		for (i=2; i<j; i++) {
			if (j%i==0) {
				break;
			}
		}
		if (i==j)
			printf("%d ",i);
	}

}

