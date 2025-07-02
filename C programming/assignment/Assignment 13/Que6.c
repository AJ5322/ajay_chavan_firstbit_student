struct Date
{
	int date;
	int month;
	int year;
	
	
};
void main()
{
	struct Date d1;

		printf("enter date\n");
		scanf("%d%d%d",&d1.date,&d1.month,&d1.year);

		printf("%d/%d/%d",d1.date,d1.month,d1.year);
}
