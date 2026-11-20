#include <stdio.h>

int Difference(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}