
//Merge two arrays
#include <stdio.h>
void array1 (int*,int);
void array2	(int*,int);
void mergeArray (int*,int,int*,int,int*,int);
void display (int*,int);
void main () {
	int arr [5];
	printf("Enter the element of arr\n");
	array1 (arr,5);
	int brr [4];
	printf("Enter the element of brr");
	array2 (brr,4);
	int crr [9];
	mergeArray (arr,5,brr,4,crr,9);
	display (crr,9);
}

void array1 (int *arr1,int size) {
	int i;
	for(i=0; i<size; i++) {
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


