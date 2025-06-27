// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
// desired operations. 
//#include<stdio.h>
void main()
{
	int no1,no2,res;
	char op;
	
	printf("enter two no");
	scanf("%d%d",&no1,&no2);
	
	printf("Enter your operator:(+,-,*,/,%%)\n");
//	fflush(stdin);
	scanf(" %c",&op);
	
	if(op=='+')
	{
		res=no1+no2;
		printf("Addition is :%d",res);
	}
	else if(op=='-')
	{
		res=no1-no2;
		printf("Substraction is :%d",res);
	}
	else if(op=='*')
	{
		res=no1*no2;
		printf("Multiplication is :%d",res);
	}
	else if(op=='/')
	{
		res=no1/no2;
		printf("Division is :%d",res);
	}
	else if(op=='%')
	{
		res=no1%no2;
		printf("Mod is :%d",res);
	}
	else
	{
		printf("invalid operator");
	}
}
