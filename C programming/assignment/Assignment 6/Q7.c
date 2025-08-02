//Take two array and add sum in third array

void main (){
	int ptr1[10],i;
	printf("Enter the elements of first array\n");
		for (i=0; i<10; i++)
		scanf("%d",&ptr1 [i]);
		
			int ptr2[10];
	printf("Enter the elements of second array\n");
		for (i=0; i<10; i++)
		scanf("%d",&ptr2 [i]);
		
			int ptr3[10];
				printf("[");
	for (i=0; i<10; i++){
		ptr3[i]=ptr1[i]+ptr2[i];
		printf("%d,",ptr3[i]);
			}
	printf("\b]\n");
}
