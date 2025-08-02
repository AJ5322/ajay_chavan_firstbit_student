//Print alternate elements in array.

void main (){
	int ptr[10],i;
	printf("Enter the elements\n");
		for (i=0; i<10; i++)
		scanf("%d",&ptr [i]);
		printf("[");
	for (i=0; i<10; i=i+2)
		printf("%d,",ptr[i]);
	printf("\b]\n");
}
