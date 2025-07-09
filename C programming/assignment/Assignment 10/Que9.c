
//Write a program to check the string is palindrome or not.
int isPalinstr (char*);
void main (){
	char str [70] ;
	printf("Enter the string :");
	scanf("%s",str);
	int res=isPalinstr (str);
	if (res==1)
	printf("String is palindrome");
	else
	printf("String is not palindrome");
}

int isPalinstr (char* str){
	int i=0;
	int len=strlen (str);
	int j=len-1;
	while (i<j){
		if (str[i] != str[j])
		return 0;
		i++;
		j--;
	}
	return 1;
}

