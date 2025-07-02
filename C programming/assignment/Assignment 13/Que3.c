struct Admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
};
void main()
{
	struct Admin s1;

		
	printf("enter the id");
	scanf("%d",&s1.id);
	printf("Admin id:%d\n",s1.id);
	
	printf("enter the name");
	scanf("%s",s1.name);
	printf("Admin name:%s\n",s1.name);
	
		
	printf("enter the salary");
	scanf("%lf",&s1.salary);
	printf("Admin salry:%lf\n",s1.salary);
	
	printf("enter the allowance");
	scanf("%lf",&s1.allowance);
	printf("Admin allowance:%lf\n",s1.allowance+s1.salary);
	
	
}
