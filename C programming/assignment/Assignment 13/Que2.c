struct employee
{
	int id;
	char name[20];
	double salary;
};
void main()
{
	struct employee s1;

		
	printf("enter the id");
	scanf("%d",&s1.id);
	printf("employee id:%d\n",s1.id);
	
	printf("enter the name");
	scanf("%s",s1.name);
	printf("employee name:%s\n",s1.name);
		
	printf("enter the salary");
	scanf("%lf",&s1.salary);
	printf("employee salary:%lf\n",s1.salary);
	
}
