#include <stdio.h> //Объявить библиотеки ввода-вывода

int main(void)
{
    int a, b, c; //Объявить переменные
    printf("Input number:\n"); //Вывести на экран подсказку
    scanf ("%d%d", &a, &b); //Считать два целых числа и записать их по адресу a,b
    c = a + b; //Сложить два числа и поместить сумму в c
    printf("%d\n", c); //Вывести на экран значение в переменной c
    return 0; //Завершить программу успешно
}
