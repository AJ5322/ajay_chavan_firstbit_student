//remove nth index character

char removeNthIndex (char*,char*,int);
void main (){
	char str [30];
	printf("Enter the string");
	scanf("%s",str);
	char str2 [20];
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	removeNthIndex(str,str2,n);
	printf("%s",str2);

}

char removeNthIndex (char *str,char* str2,int num){
int j=0,i;
	for (i=0;str[i] != '\0';i++){
		if (i!=num){
		str2[j]=str[i];
		j++;
			}
	}
	 str2='\0';
}

