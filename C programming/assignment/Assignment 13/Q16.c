//Date (date, month, year)


typedef struct Date {
    int date;
    int month;
    int year;
} Date;

Date store(Date);
void display(Date);

void main() {
    Date d;
    d = store(d);
    display(d);
}

Date store(Date d) {
    printf("Enter date (1-31): ");
    scanf("%d", &d.date);
    printf("Enter month (1-12): ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);
    return d;
}

void display(Date d) {
    printf("Date: %02d/%02d/%04d\n", d.date, d.month, d.year);
}
