//Product (id, name, quantity, price) pass by address (array)

typedef struct Product {
	int id;
	char name[30];
	int quantity;
	float price;
} Product;


Product store (Product*,int);
void display (Product*,int);

void main () {
	Product s [3];
	store (s,3);
	display (s,3);
}

Product store (Product *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
	printf("Enter Product ID: ");
	scanf("%d", &s[i].id);

	printf("Enter Product Name: ");
	scanf("%s", s[i].name);

	printf("Enter Quantity: ");
	scanf("%d", &s[i].quantity);

	printf("Enter Price: ");
	scanf("%f", &s[i].price);
	}
	printf("\n");
}

void display (Product *s,int n) {
	int i;
	for (i=1; i<=n; i++) {
	printf("Product Details\n");
	printf("ID    : %d\n", s[i].id);
	printf("Name   : %s\n", s[i].name);
	printf("Quantity : %d\n", s[i].quantity);
	printf("Price   : %.2f\n", s[i].price);
	printf("Total Value: %.2f\n", s[i].quantity * s[i].price);
		printf("\n");
	}
}

