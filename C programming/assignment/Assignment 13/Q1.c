// Student (rollNo, name, marks) 

struct student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct student s1;
	printf("enter student rollno,name,marks");
	scanf("%d",&s1.rollno);
	scanf("%s",s1.name);
	scanf("%d",&s1.marks);
	
	printf("student details are:\n%d\n%s\n%d",s1.rollno,s1.name,s1.marks);
} 

