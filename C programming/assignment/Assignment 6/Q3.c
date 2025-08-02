//Find sum of all numbers.

void main (){
	int ptr[5];
	int sum,i;
	printf("Enter the elements\n");
		for(i=0; i<5; i++)
		scanf("%d",&ptr [i]);
		printf("[");
	for(i=0; i<5; i++)
		printf("%d,",ptr[i]);
	printf("\b]\n");
	for(i=0;i<5;i++)
	sum=sum+ptr[i];
	printf("Sum of arrayElemet=%d",sum);
}
