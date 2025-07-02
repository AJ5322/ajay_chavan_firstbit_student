struct HR
{
	int id;
	char name[20];
	double salary;
	double Commission;
};
void main()
{
	struct HR h1;

		
	printf("enter the id");
	scanf("%d",&h1.id);
	printf("HR id:%d\n",h1.id);
	
	printf("enter the name");
	scanf("%s",h1.name);
	printf("HR name:%s\n",h1.name);
	
		
	printf("enter the salary");
	scanf("%lf",&h1.salary);
	printf("HR salry:%lf\n",h1.salary);
	
	printf("enter the Commission");
	scanf("%lf",&h1.Commission);
	h1.Commission=(h1.Commission/100)*h1.salary;
	printf("HR commission %.2lf\n",h1.Commission);
	printf("after commsion %.2lf ",h1.Commission+h1.salary);
	
	
}
