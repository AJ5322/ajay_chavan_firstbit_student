struct student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct student s1;

		
	printf("enter the rollno");
	scanf("%d",&s1.rollno);
	printf("student rollno:%d\n",s1.rollno);
	
	printf("enter the name");
	scanf("%s",s1.name);
	printf("student name:%s\n",s1.name);
		
	printf("enter the marks");
	scanf("%d",&s1.marks);
	printf("student marks:%d\n",s1.marks);
	
}
