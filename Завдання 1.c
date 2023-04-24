#include <stdio.h>

int main()
{
    char input;
choice:
    printf("Запустити код? (y/n): ");
    scanf(" %s", &input);
    if (input == 'y')
    {
        goto method;
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
method:
{
    char input;
    printf("a - з короткою умовою; b - з повною умовою; \n");
    printf("Яким методом будемо вирішувати завдання? Щоб повернутися - напишіть  r. (a/b/r): ");
    scanf(" %s", &input);
    if (input == 'a')
    {
        goto code_1;
    }
    else if (input == 'b')
    {
        goto code_2;
    }
    else if (input == 'r')
    {
        goto choice;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto method;
    }
}

code_1:
{
    float x, y, z;
    printf("Задайте число x: ");
    scanf("%f", &x);
    printf("Задайте число z: ");
    scanf("%f", &z);
    if (x < 3)
        y = 3 * x + z;
    else if (3 <= x && x <= 10)
        y = (2 * x * z) / (7 - z);
    else if (x > 10)
        y = x;
    printf("Визначення: %.2f \n", y);
    goto choice;
}

code_2:
{
    float x, y, z;
    printf("Задайте число x: ");
    scanf("%f", &x);
    printf("Задайте число z: ");
    scanf("%f", &z);
    if (x < 3) y = 3 * x + z;
    if (3 <= x && x <= 10) y = (2 * x * z) / (7 - z);
    if (x > 10) y = x;
    printf("Визначення: %.2f \n", y);
    goto choice;
}
}
