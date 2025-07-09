//strtok () tokenizing 	given string using delimeter

void main () {
	char str1 []="My name is Ajay and i am from India";
	char *str2 = strtok (str1," ");
while (str2 != NULL){
		printf("%s\n",str2);
		str2= strtok (NULL," ");
}
}
