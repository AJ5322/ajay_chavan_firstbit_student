void main()
{
	int unit,res;
	printf("enter a unit");
	scanf("%d",&unit);	
	if(unit>=1&&unit<=50)
	{
		res=unit*30;
		printf("you have to pay= %d",res);
	}
	else if(unit>=51&&unit<=150)
	{
		res=unit*40;
	printf("you have to pay= %d",res);
	}
	else if(unit>=151)
	{
		res=unit*50;
		printf("you have to pay= %d",res);
	}
}
