//Merge two arrays

void array1 (int*,int);
void array2	(int*,int);
void mergeArray (int*,int,int*,int,int*,int);
void display (int*,int);
void main () {
	int *arr;
	int size,size2,size3;
	printf("Enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the element of arr\n");
	array1 (arr,size);
	int *brr;
	printf("Enter the size");
	scanf("%d",&size2);
	brr=(int*)malloc(size2*sizeof(int));
	printf("Enter the element of brr");
	array2 (brr,size2);
	int *crr;
	printf("Enter the size");
	scanf("%d",&size3);
	crr=(int*)malloc(size3*sizeof(int));
	mergeArray (arr,size,brr,size2,crr,size3);
	if (size+size2==size3)
	display (crr,size3);
	else
	printf("Invalid size");

}

void array1 (int *arr1,int size) {
	int i;
	for (i=0; i<size; i++) {
		scanf("%d",&arr1 [i]);
	}
}

void array2 (int *arr2,int size) {
	int i;
	for (i=0; i<size; i++) {
		scanf("%d",&arr2 [i]);
	}
}

void mergeArray (int *ptr1,int size1,int *ptr2,int size2,int *ptr3,int size) {
	int i,j=0,k=0;
	for (i=0; i<size1; i++) {
		ptr3[i]=ptr1[j];
		j++;
	}
	for (i=size1; i<size; i++) {
		ptr3[i]=ptr2[k];
		k++;
	}
}

void display (int *merged,int size) {
	int i;
	printf("[");
	for (i=0; i<size; i++)
		printf("%d,",merged[i]);
	printf("\b]");
}


