#include <stdio.h>
void main()
{
	int no1[5],no2[5];

	int i,j;
	printf("enter first elements:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&no1[i]);
	}

	printf(" first elements:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",no1[i]);
	}

	printf("enter second elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&no2[i]);
	}

	printf("\nsecond element :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",no2[i]);
	}
	
	printf("Common elements are:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(no1[i]==no2[j])
			{
				printf("%d\n",no1[i]);
			}
		}
	}
	
}
