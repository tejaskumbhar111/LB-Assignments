
#include <stdio.h>

int CountChar(char *str, char ch)
{
    int i = 0;
    int iCnt = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency of character is %d", iRet);

    return 0;
}