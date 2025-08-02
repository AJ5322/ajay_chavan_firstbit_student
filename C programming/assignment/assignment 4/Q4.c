//Print strong numbers in the given range 1 to n.

void main () {
	int num;
	printf("Enter the number ");
	scanf("%d",&num);

	for (j=1;j<=num;j++){
	int sum=0,rem,temp=j;
	while (temp>0) {
		rem=temp%10;
		int fact=1;
		
		for (i=1; i<=rem; i++) {
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if (j==sum)
	printf("%d ",j);
}
}


