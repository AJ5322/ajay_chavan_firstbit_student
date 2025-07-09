//strncasecmp

void main (){
	char str1[] = "FirstBit";
    char str2[] = "FirstBit";
    int result = strncasecmp(str1, str2, 5); 
    if (result == 0)
        printf("Strings are equal ");
    else if (result < 0)
        printf("String 1 is less than String 2");
    else
        printf("String 1 is greater than String 2");
}

