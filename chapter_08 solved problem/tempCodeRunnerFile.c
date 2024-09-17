#include <stdio.h>

void convertVowelsToUppercase(char str[]);

int main()
{
    char str[] = "Priyanshu";
    convertVowelsToUppercase(str);
    printf("Modified string: %s", str);
    return 0;
}

void convertVowelsToUppercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
            str[i] = 'A';
        else if (str[i] == 'e')
            str[i] = 'E';
        else if (str[i] == 'i')
            str[i] = 'I';
        else if (str[i] == 'o')
            str[i] = 'O';
        else if (str[i] == 'u')
            str[i] = 'U';
    }
}