//Distance ( feet, inch) pass one pointer variable to function 


typedef struct Distance{
    int feet;
    int inch;
} Distance;

Distance store(Distance*);
void display(Distance*);

void main() {
    Distance d;
    store(&d);
    display(&d);
}

Distance store(Distance *d) {
    printf("Enter feet: ");
    scanf("%d", &d->feet);
    printf("Enter inches: ");
    scanf("%d", &d->inch);
printf("\n\n");
}

void display(Distance *d) {
    printf("Distance: %d feet %d inches\n", d->feet, d->inch);
}

