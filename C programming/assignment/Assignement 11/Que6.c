//Accept array and print only prime numbers of array

void store (int*,int);
void prime (int*,int);
void main (){
	int *arr;
	int size;
	printf("Enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements\n");
	store (arr,size);
	prime (arr,size);
	free(arr);
}
void store (int *ptr,int size) {
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr [i]);
}

void prime (int *ptr,int size) {
	int i,j;
	printf("[");
	for (i=0; i<size; i++){	//
		int count=0;
		for (j=2;j<ptr[i];j++){	//7 
			if (ptr[i]%j==0){
				count=1;
				break;
		}
		}
	if (count==0)
		printf("%d,",ptr[i]);
	}
	printf("\b ]\n");
}

