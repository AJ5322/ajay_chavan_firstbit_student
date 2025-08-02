
typedef struct Admin{
	int id;
	char name[30];
	double salary;
	double allowance;
}Admin;

Admin store (Admin*);
void display (Admin*);
void main (){
	Admin emp;
	printf("Admin data :\n");
	store (&emp);
	display (&emp);
}

Admin store (Admin *emp){
	printf("Enter the id : \n");
	scanf("%d",&emp->id);
	printf("Enter the name :\n");
	scanf("%s",emp->name);
	printf("Enter the salary :\n");
	scanf("%lf",&emp->salary);
	printf("Enter the allowance :\n");
	scanf("%lf",&emp->allowance);
	
	printf("\n\n");
}

void display (Admin *emp){
	printf("Admin id:%d\n",emp->id);
	printf("Name :%s\n",emp->name);
	printf("Salary=%.1lf\n",emp->salary);
	printf("Total salary=%.1lf",emp->allowance+emp->salary);
}
