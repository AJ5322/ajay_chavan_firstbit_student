void main()
{
    int i;
	float numbers[5] = {85,78,80,70,89}; 
    float sum = 0, average;

    
    for (i = 0; i < 5; i++) 
	{
        sum += numbers[i];
    }
    average = sum / 5;
    
    printf("Average of the five numbers: %f\n", average);

}

