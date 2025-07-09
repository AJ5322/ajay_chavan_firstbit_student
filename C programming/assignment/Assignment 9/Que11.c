//mystrrchr function
//mystrchr function
char *mystrrchr (char*,char);
void main () {
	char str [] ="ajaychavan";
	char ch;
	printf("Enter the character");
	scanf(" %c",&ch);
	char *res;
	res = mystrrchr (str,ch);
	if (res!=NULL)
		printf("%s",res);
	else
		printf("Not found");
}

char *mystrrchr (char *str,char ch) {
	int len=strlen(str);
	int i=len-1;
	while (i>=0) {
		if (str[i] == ch)
			return &str[i];
		i--;
	}
	return NULL;
}

