// Accept a number and check if it is divisible by 3, 5, or both.

void main()
{
	int no;
	
	printf("enter a no");
	scanf("%d",&no);
	
	if(no%3==0&&no%5==0)
	{
		printf("no is divisible by both");
	}
	else if(no%5==0&&no%3!=0)
	{
		printf("no is divisible by five but not three by  five");
	}
	else if(no%3==0&&no%5!=0)
	{
		printf("no is divisible by three but not divisible by  five");
	}
	else
	{
		printf("divisible by none");
	}
}
