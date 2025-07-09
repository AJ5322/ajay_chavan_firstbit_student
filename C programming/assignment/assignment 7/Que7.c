//Take two array and add sum in third array

void store1 (int*,int);
void store2 (int*,int);
void store3 (int*,int);
void display (int*,int,int*,int,int*,int);
void main (){
	int arr[10];
	printf("Enter the elements of first array\n");
	store1 (arr,10);	//array 1

	int brr[10];
	printf("Enter the elements of second array\n");
	store2 (brr,12);		//array 2
	
	int crr[10];
	display (crr,10,arr,10,brr,10);	//result
}
void store1 (int *ptr1,int size) {
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr1 [i]);
}

void store2 (int *ptr2,int size) {
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr2 [i]);
}


void display (int *ptr,int size,int *ptr1,int size1,int* ptr2,int size2) {
	int i;
	printf("[");
	for (i=0; i<size; i++){
		ptr[i]=ptr1[i]+ptr2[i];
		printf("%d,",ptr[i]);
			}
	printf("\b]\n");
}

