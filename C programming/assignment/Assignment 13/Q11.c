//struct student

typedef struct Student {
	int rollno;
	char  name[20];
	int marks ;
	long long int mobno;
} Student;

Student store(Student);
void display(Student);
void main () {
	//Student 1
	Student s1,s2,s3,s4,s5;
	printf("Student 1 information\n");
	s1= store(s1);
	display (s1);
	//Student 2
	printf("Student 2 information\n");
	s1= store(s1);
	display (s1);
	//Student 3
	printf("Student 3 information\n");
	s1= store(s1);
	display (s1);
	//Student 4
	printf("Student 4 information\n");
	s1= store(s1);
	display (s1);
	//Student 5
	printf("Student 5 information\n");
	s1= store(s1);
	display (s1);
}

Student store(Student s1) {
	printf("Enter the name: \n");
	scanf("%s",s1.name);
	printf("Enter the rollno: \n");
	scanf("%d",&s1.rollno);
	printf("Enter the marks: \n");
	scanf("%d",&s1.marks);
	printf("Enter the mobno: \n");
	scanf("%lld",&s1.mobno);
	return s1;
}
void display (Student s1) {
	printf("Name : %s\n",s1.name);
	printf("Rollno : %d\n",s1.rollno);
	printf("Marks : %d\n",s1.marks);
	printf("Mob no : %lld\n",s1.mobno);
}
