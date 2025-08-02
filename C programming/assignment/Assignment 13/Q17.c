//Time (hour, min, sec)

typedef struct Time {
    int hour;
    int min;
    int sec;
} Time;

Time store(Time);
void display(Time);

void main() {
    Time t;
    t = store(t);
    display(t);
}

Time store(Time t) {
    printf("Enter hour (0-23): ");
    scanf("%d", &t.hour);
    printf("Enter minute (0-59): ");
    scanf("%d", &t.min);
    printf("Enter second (0-59): ");
    scanf("%d", &t.sec);
    return t;
}

void display(Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hour, t.min, t.sec);
}
