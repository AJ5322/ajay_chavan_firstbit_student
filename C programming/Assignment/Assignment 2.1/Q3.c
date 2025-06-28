// Write a program to find greatest of three numbers using nested if-else. 

void main()
{
	int no1,no2,no3;
	
	printf("enter three number");
	scanf("%d%d%d",&no1,&no2,&no3);
	
	if(no1>no2)
	{
		if(no1>no3)
		{
			printf("no1 is greater");
		}
		else
		{
			printf("no3 is greater");
		}
	}
		else if(no2>no3)
		{
			printf("no2 is greater");
		}
		else
		{
			printf("no3 is greater");
		}
	}

