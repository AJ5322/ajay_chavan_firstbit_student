//replace all accurance of a into $
#include <stdio.h>
char *replaceChar (char*,char);
void main ()
{
	char str [30] ;
	printf("Enter the string");
	scanf("%s",str);
	fflush(stdin);
	char ch;
	printf("Enter the character");
	scanf(" %c",&ch);
	char *res=replaceChar (str,ch);
	printf("%s",res);
	
}	
char *replaceChar (char* str,char ch){
	int i;
	for (i=0;str[i]!='\0';i++){
		if (str[i]== 'a'){
			str[i]= ch;
		}
	}
	 return str;
	}

