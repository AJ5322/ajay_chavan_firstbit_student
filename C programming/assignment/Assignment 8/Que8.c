//strdup () Duplicate the string 
#include <stdio.h>
#include <string.h>
void main (){
	char str1 []="Ajay";
	char *sirName = strdup(str1);
	printf("%s",sirName);
}
