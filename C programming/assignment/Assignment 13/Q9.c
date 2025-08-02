//Additon of two complex number

typedef struct Complex {
	int real;
	int img;
}Complex;

void main (){
	Complex c1,c2,c3;
	printf("Complex number no 1");
	scanf("%d%d",&c1.real,&c1.img);
	printf("Complex number no 2");
	scanf("%d%d",&c2.real,&c2.img);
	
	printf("\n %d+%d i",c1.real,c1.img);
		
	printf("\n %d+%d i",c2.real,c2.img);
	
	c3.real = c1.real + c2.real;
	c3.img = c1.img + c2.img;	
	printf("\nSum = %d+%d i",c3.real,c3.img);
	
}
