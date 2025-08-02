//Additon of two complex number

typedef struct Complex {
	int real;
	int img;
}Complex;
Complex addComplex (Complex,Complex);
void display (Complex);
void main (){
	Complex c1,c2,c3;
	printf("Complex number no 1");
	scanf("%d%d",&c1.real,&c1.img);
	printf("Complex number no 2");
	scanf("%d%d",&c2.real,&c2.img);
	display (c1);
	display (c2);
	c3=addComplex (c1,c2);
	display (c3);
	
}

void display(Complex cmp){
	printf("\n %d+%d i",cmp.real,cmp.img);
}
Complex addComplex (Complex x,Complex y){
	Complex temp;
	temp.real=x.real+y.real;
	temp.img=x.img+y.img;
return temp;
}
