//WAP to Count the Number of Vowels in a String

int countVowelInString (char*);
void main (){
	char str[30];
	printf("Enter the string");
	scanf("%s",str);
int res=countVowelInString (str);
printf("There are %d vowels in your string",res);
}

int countVowelInString (char *str){
	int count=0,i;
	for (i=0;str[i] != '\0';i++){
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		count++;
	}

	return count;
}

