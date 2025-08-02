//SalesManager (id, name, salary, incentive, target)

typedef struct SalesManager {
	int id;
	char name [20];
	double salary;
	double incentive;
	double target;
}SalesManager;

SalesManager store (SalesManager);
void display (SalesManager);


void main() {
    SalesManager sm;
    sm = store(sm);
    display(sm);
}

SalesManager store(SalesManager sm) {
    printf("Enter Sales Manager ID: ");
    scanf("%d", &sm.id);
    printf("Enter Name: ");
    scanf(" %s", sm.name); 
    printf("Enter Salary: ");
    scanf("%lf", &sm.salary);
    printf("Enter Incentive: ");
    scanf("%lf", &sm.incentive);
    printf("Enter Target: ");
    scanf("%lf", &sm.target);
    return sm;
}

void display(SalesManager sm) {
    printf("Sales Manager Data\n");
    printf("ID       : %d\n", sm.id);
    printf("Name     : %s\n", sm.name);
    printf("Salary   : %.2lf\n", sm.salary);
    printf("Incentive: %.2lf\n", sm.incentive);
    printf("Target   : %.2lf\n", sm.target);
    printf("Total salary: %.2lf\n", sm.salary + sm.incentive);
}
