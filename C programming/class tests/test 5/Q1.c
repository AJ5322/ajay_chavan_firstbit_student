
//WAP to calculate selling price of book based on cost price and discount;
void calculateSellPrice (double,double);
void main (){
	double costPrice,sellPrice;
	printf("Enter the costPrice \n");
	scanf("%lf",&costPrice);
	calculateSellPrice(costPrice,sellPrice);
}

void calculateSellPrice (double costPrice,double sellPrice){
		double discount;
		if (costPrice>=5000 && costPrice<=10000){
			discount = (costPrice/100)*10;
			printf("Your discount is %.1lf \n",discount);
			sellPrice=costPrice-discount;
			printf("final price = %.2lf",sellPrice);
		}
		else if (costPrice>=2000 && costPrice<=40000){
			discount = (costPrice/100)*5;
			printf("Your discount is %.1lf \n",discount);
			sellPrice=costPrice-discount;
			printf("final price = %.2lf",sellPrice);
		}
		else{
			printf("Not discount");
		}
	
}


