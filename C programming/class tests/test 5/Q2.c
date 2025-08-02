//WAP to initialize some amount in your account.Then give choice to user for deposit or withdraw and display updated amount.
//Condition to withdraw (if the balance is less than 3000 display can't withdraw the amount balance is not sufficient).


void depositOrwithdraw (int,double,double);
void main () {
	printf("Enter 1 for deposit\n");
	printf("Enter 2 for withdraw\n");
	int choice;
	printf("Enter the choice ");
	scanf("%d",&choice);
	double amount=30000.0;
	double amt;
	printf("Enter the amount ");
	scanf("%lf",&amt);
	depositOrwithdraw (choice,amount,amt);
}

void depositOrwithdraw (int choice,double amount,double amt) {
	if (choice==1) {
		amount=amount+amt;
		printf("You have deposited %.1lf Your current balance is %.1lf \n",amt,amount);
	} else if (choice==2) {
		amount=amount-amt;
		printf("You withdraw %.1lf Your current balance is %.1lf \n",amt,amount);
	} else if (amt<3000) {
		printf("Can't withdraw the amount balance is not sufficient");
	}
}
