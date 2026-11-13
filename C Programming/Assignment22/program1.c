
#include <stdio.h>

void Pattern(int iNo)
{
    int i;
    char ch = 'A';

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
