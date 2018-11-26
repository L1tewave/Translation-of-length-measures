#include "pch.h"
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char check = '\0';
	float cm = 0;
	printf_s("Введите количество сантиметров для перевода в дюймы: ");
	while (scanf_s("%f%c", &cm, &check, 1) != 2 || check != '\n' || cm <= 0)
	{
		printf_s("Ошибка,попробуйте ещё раз используя только положительные числа\n");
		while (getchar() != '\n');
	}
	float inch = cm / 2.54;
	printf_s("%f в сантиметрах = %f в дюймах ", cm,inch);
	return 0;
}
