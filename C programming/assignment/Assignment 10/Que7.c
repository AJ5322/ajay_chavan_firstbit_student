
//WAP to Remove the Characters of Odd Index Values in a String
char *removeoddChar (char*,char*);
void main ()
{
	char str [50] ;
	printf("Enter the string :");
	scanf("%s",str);
	char str2[50];
	removeoddChar (str,str2);
	printf("%s",str2);
}

char *removeoddChar (char *str,char *str2){
	int i=0,j=0;
	int len=strlen (str);
	while (i<len && str[i] != '\0'){
		if(i%2==0){
		str2[j]=str[i];
		j++;
		}
		i++;
	}
	str2[j]='\0';
	return str2;
}

