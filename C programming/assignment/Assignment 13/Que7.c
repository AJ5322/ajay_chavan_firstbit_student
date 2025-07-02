struct Time
{
	int hour;
	int minute;
	int second;
	
	
};
void main()
{
	struct Time t1;

		printf("enter time\n");
		scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);

		printf("%d:%d:%d",t1.hour,t1.minute,t1.second);
}
