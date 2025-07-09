//mystrncat function

char *mystrncat (char*,char*,int n);
void main () {
	char str1 [30];
	printf("Enter the string 1\n");
	scanf("%s",str1);
	char str2 [30];
	printf("Enter the string 2\n");
	scanf("%s",str2);
	int n;
	printf("Enter the number");
	scanf("%d",&n);

	mystrncat (str1,str2,n);
	printf("%s",str1);
}

char *mystrncat (char *str1,char *str2,int n) {

	int len=strlen(str1);
	int j=len;
	int i=n;
	while (str2[i] != '\0') {
		str1[j] = str2[i];
		j++;
		i++;
	}
	return str1;
}

