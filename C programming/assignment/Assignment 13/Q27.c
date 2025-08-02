//struct student pass one structure variable to function by address

typedef struct Student {
	int rollno;
	char  name[20];
	int marks ;
	long long int mobno;
} Student;

Student store(Student*);
void display(Student*);
void main () {
	//Student 1
	Student s1;
	printf("Student 1 information\n");
	 store(&s1);
	display (&s1);

}

Student store(Student *s1) {
	printf("Enter the name: \n");
	scanf("%s",s1->name);
	printf("Enter the rollno: \n");
	scanf("%d",&s1->rollno);
	printf("Enter the marks: \n");
	scanf("%d",&s1->marks);
	printf("Enter the mobno: \n");
	scanf("%lld",&s1->mobno);
	
	printf("\n\n");
}

void display (Student *s1) {
	printf("Name : %s\n",s1->name);
	printf("Rollno : %d\n",s1->rollno);
	printf("Marks : %d\n",s1->marks);
	printf("Mob no : %lld\n",s1->mobno);
}
