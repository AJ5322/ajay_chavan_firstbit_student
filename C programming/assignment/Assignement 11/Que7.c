//Take two array and add sum in third array

void store1 (int*,int);
void store2 (int*,int);
void store3 (int*,int);
void display (int*,int,int*,int,int*,int);
void main (){
	int *arr;
	int size;
	printf("Enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements of first array\n");
	store1 (arr,size);	


	int *brr;
	int size2;
	printf("Enter the size");
	scanf("%d",&size2);
	brr=(int*)malloc(size2*sizeof(int));
	printf("Enter the elements of second array\n");
	store2 (brr,size2);	
	
	
	int *crr;
	int size3;
	printf("Enter the size");
	scanf("%d",&size3);
	crr=(int*)malloc(size3*sizeof(int));
	if (size==size2 && size2==size3)
	display (crr,size3,arr,size,brr,size2);	
	else
	printf("Invalid size");
	free(crr);
}
void store1 (int *ptr1,int size) {
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr1 [i]);
}

void store2 (int *ptr2,int size2) {
	int i;
	for (i=0; i<size2; i++)
		scanf("%d",&ptr2 [i]);
}


void display (int *ptr,int size3,int *ptr1,int size,int* ptr2,int size2) {
	int i;
	printf("[");
	for (i=0; i<size3; i++){
		ptr[i]=ptr1[i]+ptr2[i];
		printf("%d,",ptr[i]);
			}
	printf("\b]\n");
}

