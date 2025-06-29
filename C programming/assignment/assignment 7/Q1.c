//  Find minimum and maximum number in array.  

void main()
{
	int arr[20],min,max,no,i;
	
	printf("enter the element");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=1;i<no;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)		
		{
			max=arr[i];
		}
	}
	printf("minimum number is %d\n",min);
	printf("maximum number is %d",max);
	
}
