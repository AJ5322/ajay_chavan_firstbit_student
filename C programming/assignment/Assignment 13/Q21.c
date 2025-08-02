//struct student pass by address (array)

typedef struct Student {
	int rollno;
	char  name[20];
	int marks ;
	long long int mobno;
} Student;

void storeArray (Student*,int);
void display (Student*,int);
int searchByRollno (Student*,int,int);
void main (){
Student batch1 [3],batch2 [2],batch3 [3];
printf("Batch no 1 \n");
storeArray (batch1,3);

printf("Batch no 2 \n");
storeArray (batch2,3);
display (batch2,3);

printf("Batch no 3 \n");
storeArray (batch3,3);
display (batch3,3);
int choice;
printf("Enter 1 to display\n Enter 2 to seach");
if (choice==1){

int rollno;
printf("Enter the rollno you want ");
scanf("%d",&rollno);

int index=searchByRollno (batch1,1,rollno);
	if (index!= -1)
	printf("%s found at index %d",batch1[index].name,index);
}
}
else if (choice==2){
display (batch1,3);
}


void storeArray (Student *ptr,int size){
		for (int i=0;i<size;i++){
	
		printf("Enter the Name ");
		scanf("%s",&ptr[i].name);
		printf("Enter the rollno ");
		scanf("%d",&ptr[i].rollno);
		printf("Enter the marks ");
		scanf("%d",&ptr[i].marks);
		printf("Enter the mobno ");
		scanf("%lld",&ptr[i].mobno);
	}
	printf("\n");
}

void display (Student *ptr,int size){
	printf("Name		Rollno		Marks		Mobno\n");
	for (int i=0;i<size;i++){
	printf("%s		%d		%d		%lld \n",ptr[i].name,ptr[i].rollno,ptr[i].marks,ptr[i].mobno);
	}
}

int searchByRollno (Student *ptr,int size,int rollno){
	for (int i=0;i<size;i++){
		if (ptr[i].rollno==rollno)
		return i;
		
	}
	return -1;
}	

