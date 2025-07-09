// Find minimum and maximum number in array.

void store (int*,int);
void display (int*,int);
void minMax (int*,int,int*,int*);
void main () {
	int *arr ;
	int size;
	printf("Enter the size");
	scanf("%d",&size);
	arr=malloc(size*sizeof(int));
	int min,max;
	printf("Enter the number");
	store (arr,size);
	display (arr,size);
	minMax (arr,size,&min,&max);
	printf("Minimum number = %d\n",min);
	printf("Maximum number =%d",max);
	free(arr);
}

void store (int *ptr,int size) {
	int i;
	for ( i=0; i<size; i++)
		scanf("%d",&ptr [i]);
}

void display (int *ptr,int size) {
	int i;
	printf("[");
	for (i=0; i<size; i++)
		printf("%d,",ptr[i]);
	printf("\b]\n");
}

void minMax(int *ptr,int size,int *min,int *max) {
	int i;
	*min=ptr [0];
	*max=ptr [0];
	for (i=0; i<size; i++) {
		if (ptr[i] < *min)
			*min=ptr[i];
		if (ptr [i] > *max)
			*max=ptr[i];
	}
}

