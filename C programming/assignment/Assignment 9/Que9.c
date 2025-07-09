//mystrcasecmp function

int mystrcasecmp (char*,char*);
void main (){
	char str1 [] ="Sangle";
	char str2 [] ="Dhananjay";
	mystrcasecmp (str1,str2);
}
int mystrcasecmp (char *str1,char *str2){
	int i=0,count;
	while (str1[i] !='\0'){
		if (str1[i]==str2[i])
			count=0;
		else if (str1[i] < str2[i])
			count=-1;
		else
		count=2;
		i++;
	}
	if (count== 0)
		printf("String are same");
		else if (count== -1)
		printf("String 2 is greater");
		else
		printf("String 1 is greater");
}

