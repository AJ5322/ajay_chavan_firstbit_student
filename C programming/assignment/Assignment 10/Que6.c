
//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include <stdio.h>

char *replaceChar (char*,char);
void main () {
	char str [300] ;
	printf("Enter the string :");
	gets(str); 
	char ch;
	printf("Enter the character :");
	fflush (stdin);
	scanf("%c",&ch);
	char *res =replaceChar (str,ch);
	printf("%s",res);

}

char *replaceChar (char* str,char ch) {
	int i;
	for (i=0; str[i]!='\0'; i++) {
		if (str[i] == ' ') {
			str[i]= ch;
		}
	}
	return str;
}

