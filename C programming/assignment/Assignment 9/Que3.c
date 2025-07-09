int mystrcmp(char *str1, char *str2);

void main() {
    char str1[] = "Chavan";
    char str2[] = "Ajay";

    int result = mystrcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("String 2 is greater\n");
    else
        printf("String 1 is greater\n");
}

int mystrcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];  
}

