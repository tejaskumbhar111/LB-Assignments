#include <stdio.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char temp;

    while (str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while (iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}