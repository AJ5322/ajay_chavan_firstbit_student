void main ()
 {
	int range,i;
	printf("Enter the range \n");
	scanf("%d",&range);
	for (i=1;i<=range;i++) 
	{

		int num=i,sum=0,count=0;
		int temp=num,rem;
		while (num>0) 
		{
			num=num/10;
			count++;
		}
		num=temp;
		while(num>0) 
		{
			rem=num%10;
			int i=1,res=1;
			while (i<=count)
		   {
				res=res*rem;
				i++;
		   }
			sum=sum+res;
			num=num/10;
		}
		if (sum==temp)
		{
		
			printf("%d ",sum);
		}
	}
}
