//Product (id, name, quantity, price)

typedef struct Product {
	int id;
	char name[30];
	int quantity;
	float price;
} Product;

void main () {
	Product p;
	printf("Enter Product ID: ");
	scanf("%d", &p.id);

	printf("Enter Product Name: ");
	scanf("%s", p.name);

	printf("Enter Quantity: ");
	scanf("%d", &p.quantity);

	printf("Enter Price: ");
	scanf("%f", &p.price);

	printf("Product Details\n");
	printf("ID    : %d\n", p.id);
	printf("Name   : %s\n", p.name);
	printf("Quantity : %d\n", p.quantity);
	printf("Price   : %.2f\n", p.price);
	printf("Total Value: %.2f\n", p.quantity * p.price);
}
