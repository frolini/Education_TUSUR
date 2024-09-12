#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int Quarter(int x, int y)
{
	//Проверям условия принадлежности к какой либо четверти
	if ((x > 0) && (y > 0))
	{
		return 1;
	}
	if ((x < 0) && (y > 0))
	{
		return 2;
	}
	if ((x < 0) && (y < 0))
	{
		return 3;
	}
	if ((x > 0) && (y < 0))
	{
		return 4;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	//Создаём точки
	int pointOne[] = { 2, 7 };
	int pointTwo[] = { -5, 4 };
	int pointThree[] = { -2, -2 };
	//Вызов функции и вывод её результата
	printf("Точка 1 находится в %d четверти.\n", Quarter(pointOne[0], pointOne[1]));
	printf("Точка 2 находится в %d четверти.\n", Quarter(pointTwo[0], pointTwo[1]));
	printf("Точка 3 находится в %d четверти.\n", Quarter(pointThree[0], pointThree[1]));
	getch();
	return 0;
}