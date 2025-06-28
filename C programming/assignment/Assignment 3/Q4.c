void main()
{
	int no,count=0,i=1;
	
	printf("enter the number");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(no%i==0)
		{
			count++;
			
		}
		i++;
	}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}

}
