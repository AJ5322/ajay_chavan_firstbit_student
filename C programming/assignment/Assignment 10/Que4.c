//first character exchange with last character

char *swapChar (char*);
void main () {
	char str[30];
	printf("Enter the string");
	scanf("%s",str);
	char *res=swapChar (str);
	printf("%s",res);
}

char *swapChar (char *str) {
	int len=strlen (str);
	int temp;
	temp=str[0];
	str[0]=str[len-1];
	str[len-1]=temp;
	return str;
}

