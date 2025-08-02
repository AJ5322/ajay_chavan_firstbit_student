//HR (id, name, salary, commission) pass by address (array)

typedef struct HR {
	int id;
	char  name[20];
	double salary;
	double commission;
} HR;

HR store (HR*,int);
void display (HR*,int);

void main () {
	int n;
	printf("Enter the how many Admin information you want :");
	scanf("%d",&n);
	HR s[n];
	store (s,n);	
	display (s,n);
}

HR store (HR *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("Enter the id :");
		scanf("%d",&s[i].id);
		printf("Enter the name :");
		scanf("%s",s[i].name);
		printf("Enter the salary :");
		scanf("%lf",&s[i].salary);
		printf("Enter the commission :");
		scanf("%lf",&s[i].commission);
	}
	printf("\n");
}

void display (HR *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("Id : %d\n",s[i].id);
		printf("Name  :%s\n",s[i].name);
		printf("Salary :%lf\n",s[i].salary);
		int res;
	printf("After commission %d\n",res=(s[i].salary/100*s[i].commission)+s[i].salary);
		printf("\n");
	}
}

