//mystrlower

char mystrupper (char*);
void main () {
	char str1 [20];
	printf("Enter the string");
	scanf("%s",str1);
	mystrupper (str1);
	printf("Lowercase : %s",str1);
}

char mystrupper (char *str) {
	int i=0;
	while (str[i] !='\0') {
		if (str[i]>='A' && str[i]<='Z') {
			str[i]=str[i]+32;
		}
		i++;
	}
}

