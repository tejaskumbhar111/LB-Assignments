#include <stdio.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCnt = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are %d", iRet);

    return 0;
}