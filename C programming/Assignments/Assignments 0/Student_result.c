void main()
 {
    int i;
	float marks[5] = {85, 78, 92, 88, 76}; 
    float total = 0, percentage;
    int Subjects = 5; 

  
    for ( i=0; i<Subjects; i++) 
	{
        total += marks[i];
    }

 
    percentage = (total/(Subjects*100))*100;

  
    printf("Total marks: %f\n", total);
    printf("Percentage: %f\n", percentage);

}

