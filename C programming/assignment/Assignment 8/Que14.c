//strcasecmp 

void main (){
	char str [] = "Ajay";
	char str1 []="Ajay";
int res =strcasecmp (str,str1);
if (res==0)
printf("Strings are equal");
else if (res<0)
printf("String 2 is greater");
else
printf("String 1 is greater");

}
