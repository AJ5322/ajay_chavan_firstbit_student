//mystrchr function

char *mystrchr (char*,char);
void main (){
	char str [] ="Ajay";
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	char *res;
	res = mystrchr (str,ch);
	printf("%s",res);
}

char *mystrchr (char *str,char ch){
	int i=0;
	while (str[i] != '\0'){
		if (str[i] == ch)
		 	return &str[i];
			i++;
}

}

