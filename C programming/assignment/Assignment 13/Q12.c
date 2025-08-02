typedef struct Employee{
	int id;
	char name[30];
	double salary;
}Employee;

Employee store (Employee);
void display (Employee);
void main (){
	Employee emp;
	printf("Employee data :\n");
	emp=store (emp);
	display (emp);
}

Employee store (Employee emp){
	printf("Enter the id : \n");
	scanf("%d",&emp.id);
	printf("Enter the name :\n");
	scanf("%s",emp.name);
	printf("Enter the salary :\n");
	scanf("%lf",&emp.salary);
	return emp;
}

void display (Employee emp){
	printf("%d\n",emp.id);
	printf("%s\n",emp.name);
	printf("%lf\n",emp.salary);
}
