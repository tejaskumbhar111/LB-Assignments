
#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 5 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");

    if (scanf("%f %d", &fSalary, &iYears) != 2)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
