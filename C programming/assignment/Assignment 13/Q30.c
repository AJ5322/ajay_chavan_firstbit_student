//HR (id, name, salary, commission)

typedef struct HR {
	int id;
	char name [20];
	int salary;
	int commission;
}HR;

HR store (HR*);
void display (HR*);
void main (){
	HR hrName;
	hrName.commission=10;
	store(&hrName);
	display(&hrName);
}

HR store(HR *hrName){
	printf("Enter the id:\n");
	scanf("%d",&hrName->id);
	printf("Enter the name:\n");
	scanf("%s",hrName->name);
	printf("Enter the salary:\n");
	scanf("%d",&hrName->salary);
}

void display (HR *hrName){
	printf("id : %d\n",hrName->id);
	printf("Name : %s\n",hrName->name);
	printf("Salary : %d\n",hrName->salary);
	int res;
	printf("After commission %d\n",res=(hrName->salary/100*hrName->commission)+hrName->salary);
}
