#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int Quarter(int x, int y)
{
	//�������� ������� �������������� � ����� ���� ��������
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
	//������ �����
	int pointOne[] = { 2, 7 };
	int pointTwo[] = { -5, 4 };
	int pointThree[] = { -2, -2 };
	//����� ������� � ����� � ����������
	printf("����� 1 ��������� � %d ��������.\n", Quarter(pointOne[0], pointOne[1]));
	printf("����� 2 ��������� � %d ��������.\n", Quarter(pointTwo[0], pointTwo[1]));
	printf("����� 3 ��������� � %d ��������.\n", Quarter(pointThree[0], pointThree[1]));
	getch();
	return 0;
}