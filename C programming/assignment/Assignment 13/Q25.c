//SalesManager (id, name, salary, incentive, target) pass by address (array)

typedef struct SalesManager {
	int id;
	char name [20];
	double salary;
	double incentive;
	double target;
}SalesManager;
SalesManager store (SalesManager*,int);
void display (SalesManager*,int);

void main () {
	int n;
	printf("Enter the how many SalesManager information you want :");
	scanf("%d",&n);
		SalesManager s[n];
	 store (s,n);
	display (s,n);
}

SalesManager store (SalesManager *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
	printf("Enter Sales Manager ID: ");
    scanf("%d", &s[i].id);
    printf("Enter Name: ");
    scanf(" %s", s[i].name); 
    printf("Enter Salary: ");
    scanf("%lf", &s[i].salary);
    printf("Enter Incentive: ");
    scanf("%lf", &s[i].incentive);
    printf("Enter Target: ");
    scanf("%lf", &s[i].target);
	}
	printf("\n");
}

void display (SalesManager *s,int n) {
	int i;
	
	for(i=1; i<=n; i++) {
    printf("Sales Manager Data\n");
    printf("ID       : %d\n", s[i].id);
    printf("Name     : %s\n", s[i].name);
    printf("Salary   : %.2lf\n", s[i].salary);
    printf("Incentive: %.2lf\n", s[i].incentive);
    printf("Target   : %.2lf\n", s[i].target);
    printf("Total salary: %.2lf\n", s[i].salary + s[i].incentive);
		printf("\n");
	}
}

