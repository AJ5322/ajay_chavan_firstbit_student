//scan string and then scan character and search it
#include <stdio.h>
int searchChar (char*,char);
void main () {
	char str [30] ;
	printf("Enter the string");
	scanf("%s",str);
	fflush (stdin);
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	int res=searchChar (str,ch);
	if (res==1)
		printf("found");
	else
		printf("Not found");
}

int searchChar (char *str,char ch) {

	int i=0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			return 1;
			break;
		}
		i++;
	}
	return str[i]='\0';
}


