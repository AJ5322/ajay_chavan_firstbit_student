struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
};
void main()
{
	struct SalesManager s1;

		
	printf("enter the id");
	scanf("%d",&s1.id);
	printf("SalesManager id:%d\n",s1.id);
	
	printf("enter the name");
	scanf("%s",s1.name);
	printf("SalesManager name:%s\n",s1.name);

	printf("enter the target");
	scanf("%d",&s1.target);
	printf("SalesManager target:%d\n",s1.target);
	
	printf("enter the salary");
	scanf("%lf",&s1.salary);
	printf("SalesManager salary:%lf\n",s1.salary);
	
	printf("enter the incentive");
	scanf("%lf",&s1.incentive);
   	s1.incentive=s1.salary+s1.incentive;
	printf("after incentive SalesManager salary:%lf\n",s1.incentive);
	
}
