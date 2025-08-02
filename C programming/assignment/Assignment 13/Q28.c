
typedef struct Employee{
	int id;
	char name[30];
	double salary;
}Employee;

Employee store (Employee*);
void display (Employee*);
void main (){
	Employee emp;
	printf("Employee data :\n");
	store (&emp);
	display (&emp);
}

Employee store (Employee *emp){
	printf("Enter the id : \n");
	scanf("%d",&emp->id);
	printf("Enter the name :\n");
	scanf("%s",emp->name);
	printf("Enter the salary :\n");
	scanf("%lf",&emp->salary);
	
	printf("\n\n");
}

void display (Employee *emp){
	printf("Id    :%d\n",emp->id);
	printf("Name	:%s\n",emp->name);
	printf("Salary	:%lf\n",emp->salary);
}
