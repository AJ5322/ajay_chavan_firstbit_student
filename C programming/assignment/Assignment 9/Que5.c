//mystrncpy function

char mystrncpy (char*,char*,int);
void main () {
	char str1 [30];
	printf("Enter the string 1\n");
	scanf("%s",str1);
	char str2 [30];
	int number;
	printf("Enter the number");
	scanf("%d",&number);
	mystrncpy	(str2,str1,number);
	printf("%s",str2);

}

char mystrncpy (char *str2,char *str1,int number) {
	int i=0;
	while (i<number) {
		str2 [i] = str1 [i];
		i++;
	}
}

