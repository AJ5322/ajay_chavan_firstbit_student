//mystrncasecmp

int mystrncasecmp (char*,char*,int);
void main () {
	char str1 [] ="Ajsay";
	char str2 [] ="Ajsay";
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int res=mystrncasecmp (str1,str2,n);
	if (res==0)
		printf("String are same");
	else if(res==-1)
		printf("String 2 is greater");
	else if (res==1)
		printf("String 1 is greater");
}
int mystrncasecmp (char *str1,char *str2,int n) {
	int i=0;
	while (i<=n && str1[i] !='\0' && str2[i] !='\0') {
		if (str1[i] > str2[i])
			return 1;
		else if (str1[i] < str2[i])
			return -1;
		i++;
	}
	if (str1[i] == str2[i])
		return 0;

}

