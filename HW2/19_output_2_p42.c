#include <stdio.h>

int main(void)
{
    int x = 1234;
    printf ("%d\n", x); //минимальное число позиций под вывод числа
    //1234

    printf ("%9d\n", x);//под вывод числа выделено 9 позиций
    printf ("%09d\n", x);//под вывод числа выделено 9 позиций
    // 1234
}
