//Perfect number or not

void main ()
{
	int num,i,j;
	printf("Enter the number ");
	scanf("%d",&num);
	for(j=1;j<num;j++){
	int sum=0,i=1;
	while (i<j){
		if (j%i==0){
			sum=sum+i;
		}
		i++;
	}
	if (sum==j)
	printf("%d ",j);
		}
}
