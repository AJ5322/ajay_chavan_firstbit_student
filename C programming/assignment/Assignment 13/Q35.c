typedef struct Complex {
	int real;
	int img;
} Complex;

void store(Complex*);
void display(Complex*);
void addComplex(Complex*, Complex*, Complex*);

void main() {
	Complex c1, c2, result;

	printf("Enter first complex number:\n");
	store(&c1);

	printf("Enter second complex number:\n");
	store(&c2);

	printf("First: ");
	display(&c1);
	printf("\nSecond: ");
	display(&c2);

	addComplex(&c1, &c2, &result);
	printf("\nResult: ");
	display(&result);
}


void store(Complex *c) {
	printf("Enter real and imaginary parts: ");
	scanf("%d%d", &c->real, &c->img);
}

void display(Complex *cmp) {
	printf("%d + %di", cmp->real, cmp->img);
}


void addComplex(Complex *x, Complex *y, Complex *res) {
	res->real = x->real + y->real;
	res->img = x->img + y->img;
}

