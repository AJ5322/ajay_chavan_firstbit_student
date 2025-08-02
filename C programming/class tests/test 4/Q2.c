//Write a program to find power of any number.

void main (){
	double base,exponent,res=1,i;
	printf("Enter the base :");
	scanf("%lf",&base);
	printf("Enter the exponent :");
	scanf("%lf",&exponent);
	for(i=1;i<=exponent;i++){
		res=res*base;
	}
	printf("%.1lf",res);
}
