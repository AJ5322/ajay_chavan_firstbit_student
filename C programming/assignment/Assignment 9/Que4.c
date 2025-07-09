// mynstrcat ()

char mystrcat (char*,char*,char*);
void main () {
	char str1 [30];
	printf("Enter the string 1\n");
	scanf("%s",str1);
	char str2 [30];
	printf("Enter the string 2\n");
	scanf("%s",str2);
	char str3 [50];
	mystrcat (str1,str2,str3);
	printf("%s",str3);

}

char mystrcat (char *str1,char *str2,char *str3) {
	int i=0;
	while (str1[i] != '\0') {
		str3 [i] = str1[i];
		i++;
	}
	int j=0;
	while (str2[j] != '\0') {
		str3[i]= str2[j];
		j++;
		i++;
	}
}

