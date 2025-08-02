//Sort the array

void main (){
	int arr [10],i,j;
	printf("Enter the elements ");
		for(i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	int temp;
	for(i=0; i<10; i++) {
		for(j=i+1; j<10; j++) {
			if (arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=	arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("[");
	for(i=0; i<10; i++) {
		printf("%d,",arr[i]);
	}
	printf("]");
}
