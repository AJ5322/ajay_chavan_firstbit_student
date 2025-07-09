//Print alternate elements in array.

void store (int*,int);
void display (int*,int);
void main (){
	int *arr;
	int size;
	printf("Enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements\n");
	store (arr,size);
	display (arr,size);
	free(arr);
}
void store (int *ptr,int size) {
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr [i]);
}

void display (int *ptr,int size) {
	int i;
	printf("[");
	for (i=0; i<size; i=i+2)
		printf("%d,",ptr[i]);
	printf("\b]\n");
}

