#include <stdio.h>

void Reverse(char *str)
{
    int iLen = 0;
    int i = 0;

    while (str[iLen] != '\0')
    {
        iLen++;
    }

    for (i = iLen - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    return 0;
}