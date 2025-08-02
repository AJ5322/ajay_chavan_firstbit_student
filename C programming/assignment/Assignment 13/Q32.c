//Date (date, month, year) pass one structure variable to function by address


typedef struct Date {
    int date;
    int month;
    int year;
} Date;

Date store(Date*);
void display(Date*);

void main() {
    Date d;
    store(&d);
    display(&d);
}

Date store(Date *d) {
    printf("Enter date (1-31): ");
    scanf("%d", &d->date);
    printf("Enter month (1-12): ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);
    printf("\n\n");
}

void display(Date *d) {
    printf("Date: %02d/%02d/%04d\n", d->date, d->month, d->year);
}
