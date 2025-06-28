//Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene.

void main()
{
	int s1,s2,s3;
	
	printf("enter s1,s2,s3");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3)
	{
		printf("equilateral");
	}
	else if(s1==s2&&s2!=s3)
	{
		printf("isosceles");
	}
	else
	{
		printf("scalene");
	}
}
  
