void main()
{
	int no,sum=0,i=1;
	
	printf("enter the number");
	scanf("%d",&no);
	
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	{
		printf("no is perfect");
	}
	else
	{
		printf("no is not perfect");
	}
	
	
	
}
