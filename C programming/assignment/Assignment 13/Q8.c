//Distance ( feet, inch)

typedef struct Distance{
    int feet;
    int inch;
} Distance;

void main (){
	Distance d;
	printf("Enter feet: ");
    scanf("%d", &d.feet);
    printf("Enter inches: ");
    scanf("%d", &d.inch);
    
     printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}
