//Reverse given array

void main (){
	int arr [5],i;
	printf("Enter the element of arr\n");
	for (i=0; i<5; i++) {
		scanf("%d",&arr [i]);
	}
		printf("[");
	for (i=5-1;i>=0;i--){
		printf("%d,",arr[i]);
	}
	printf("]");
}
