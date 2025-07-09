// mystrcpy function

char mystrcpy (char* ,char*);
void main (){
	char str1 []="Ajay";
	char str2 [10];
	mystrcpy (str1,str2);
	printf("%s",str2);
}

char mystrcpy (char *str1,char *str2){
	int i=0;
	while (str1 [i]!='\0'){
		str2 [i] = str1 [i];
		i++;
	}
	
}

