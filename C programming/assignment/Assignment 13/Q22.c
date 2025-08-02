//Employee (id, name, salary)pass by address (array)

typedef struct Employee {
	int id;
	char  name[20];
	double salary;
} Employee;

Employee store (Employee*,int);
void display (Employee*,int);

void main () {

	int n;
	printf("Enter the how many Employee information you want :");
	scanf("%d",&n);
	Employee s[n];
	 store (s,n);
	display (s,n);
}

Employee store (Employee *s,int n) {
	int i;
	for(i=1; i<=n; i++) {
		printf("Enter the id :");
		scanf("%d",&s[i].id);
		printf("Enter the name :");
		scanf("%s",s[i].name);
		printf("Enter the salary :");
		scanf("%lf",&s[i].salary);
	}
	printf("\n");
}

void display (Employee *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("Id : %d\n",s[i].id);
		printf("Name  :%s\n",s[i].name);
		printf("Salary :%lf\n",s[i].salary);
		printf("\n");
	}
}

