#include <stdio.h>
//// Find minimum and maximum number in array.

void main (){
	int arr [10];
	int i,min,max;
	printf("Enter the element of an array ");
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("[");
	for (i=0;i<10;i++){
		printf("%d,",arr[i]);
	}
	printf("\b]\n");
	min=arr[0];
	for(i=0;i<10;i++){
		if (arr[i]<min)
			min=arr[i];
	}
	printf("Minimum number = %d\n",min);
	max=arr [0];
	for(i=0;i<10;i++){
		if (arr[i]>max)
			max=arr[i];
	}
	printf("Maximum number = %d",max);
	
	
}
