void store (int*,int);
void display (int*,int);
void evenOdd(int*,int);
void main()
{
	int arr[10];
	printf("Enter the elements\n");
	store (arr,10);
	display (arr,10);
	evenOdd(arr,10);
}
void store (int *ptr,int size) 
{
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ptr [i]);
}

void display (int *ptr,int size)
 {
	int i;
	printf("[");
	for(i=0;i<size;i++)
		printf("%d,",ptr[i]);
	printf("\b]\n");
}

void evenOdd (int *ptr,int size){
	int i;
	printf("Even =");
	for (i=0;i<size;i++){
		if (ptr[i]%2==0)
		printf("%d,",ptr[i]);
	}
		printf("\nOdd =");
	for (i=0;i<size;i++){
		if (ptr[i]%2!=0)
		printf("%d,",ptr[i]);
	}	
}
