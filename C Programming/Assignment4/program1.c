#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if(iValue < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}