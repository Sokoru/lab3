#include <stdio.h>
#include <math.h>

int main()
{
    char input;
choice:
    printf("Запустити код? (y/n): ");
    scanf(" %s", &input);
    if (input == 'y')
    {
        goto code;
    }
    else if (input == 'n')
    {
        printf("Код зупинено.");
        return 0;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto choice;
    }

code:
{
    float r, h, w, ca, ra;
    printf("Введіть радіус: ");
    scanf("%f", &r);
    printf("Введіть вистоту та ширину прямокутника: ");
    scanf("%f %f", &h, &w);
    ca = M_PI * pow(r, 2);
    ra = h * w;
    if (ra <= ca)
    {
        printf("Прямокутник поміститься в крузі.\n");
    }
    else
    {
        printf("Прямокутник не поміститься в крузі.\n");
    }
    goto choice;
}
}
