//Admin (id, name, salary, allowance) pass by address (array)

typedef struct Admin {
	int id;
	char  name[20];
	double salary;
	double allowance;
} Admin;

Admin store (Admin*,int);
void display (Admin*,int);

void main () {

	int n;
	printf("Enter the how many Admin information you want :");
	scanf("%d",&n);
	Admin s[0];
	store (s,n);
	display (s,n);
}

Admin store (Admin *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("Enter the id :");
		scanf("%d",&s[i].id);
		printf("Enter the name :");
		scanf("%s",s[i].name);
		printf("Enter the salary :");
		scanf("%lf",&s[i].salary);
		printf("Enter the allowance :");
		scanf("%lf",&s[i].allowance);
	}
	printf("\n");
}

void display (Admin *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("Id : %d\n",s[i].id);
		printf("Name  :%s\n",s[i].name);
		printf("Salary :%lf\n",s[i].salary);
		printf("Total salary :%.1lf",s[i].allowance+s[i].salary);
		printf("\n");
	}
}

