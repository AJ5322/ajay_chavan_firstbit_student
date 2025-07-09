//mystrlen function

int mystrlen (char*);
void main (){
	char str []="Ajay";
	int res = mystrlen (str);
	printf("%d",res);
}
int mystrlen (char *str){
	int i=0;
	while (str[i] != '\0'){
		i++;
	}
	return i;
}

