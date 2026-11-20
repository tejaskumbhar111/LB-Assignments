#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("%-8s %-8s %-8s %-8s\n", "Symbol", "Decimal", "Hex", "Octal");
    printf("----------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
       
        if (i >= 32 && i <= 126)
        {
            printf("%-8c %-8d %-8X %-8o\n", i, i, i, i);
        }
        else
        {
            printf("%-8s %-8d %-8X %-8o\n", "(n/p)", i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}