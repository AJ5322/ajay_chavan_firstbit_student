//Reverse given array

void array1 (int*,int);
void display (int*,int);
void main () {
	int *arr;
	int size;
	printf("Enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the element of arr\n");
	array1 (arr,size);
	display (arr,size);
	free(arr);
}

void array1 (int *arr1,int size) {
	int i;
	for (i=0; i<size; i++) {
		scanf("%d",&arr1 [i]);
	}
}

void display (int *ptr,int size){
	int i;
	printf("[");
	for (i=size-1;i>=0;i--){
		printf("%d,",ptr[i]);
	}
	printf("\b]");
}

