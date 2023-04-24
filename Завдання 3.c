#include <stdio.h>

int main()
{
    int input;
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
    int ep;
    printf("Введіть номер серії: ");
    scanf("%d", &ep);

    switch (ep)
    {
    case 1:
        printf("Довга ясна темрява, дата виходу 12 січня 2014 року\n");
        break;
    case 2:
        printf("Видіння, дата виходу 19 січня 2014 року\n");
        break;
    case 3:
        printf("Замкнена кімната, дата виходу 26 січня 2014 року\n");
        break;
    case 4:
        printf("Хто там ходить, дата виходу 9 лютого 2014 року\n");
        break;
    case 5:
        printf("Таємна доля усього життя, дата виходу 16 лютого 2014 року\n");
        break;
    case 6:
        printf("Будинки з привидами, дата виходу 23 лютого 2014 року\n");
        break;
    case 7:
        printf("Коли ти пішов.., дата виходу 2 березня 2014 року\n");
        break;
    case 8:
        printf("Форма і порожнеча, дата виходу 9 березня 2014 року\n");
        break;
    default:
        printf("Невірний номер серії.\n");
        break;
    }

    goto choice;
}
}
