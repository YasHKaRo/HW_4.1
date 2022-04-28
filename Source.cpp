#include "Header.h"

void formul(double a, double b, double* n, double* m)
{
	int flag_error = 0;
	if (a >= b)
	{
		*n = pow(a - b, (double)1 / (double)3);
	}
	else if (a < b)
	{
		if (a * b != 0)
		{
			*n = pow(a, 2) + ((a - b) / sin(a * b));
		}
		else
		{
			cout << "������� �� ���� ��� �������������!";
			flag_error += 1;
		}
	}
	if (*n < b and flag_error == 0)
	{
		*m = ((*n + a) / (-b)) + pow(pow(sin(a), 2) - cos(*n), (double)1 / (double)2);
		if (pow(sin(a), 2) - cos(*n) < 0)
		{
			flag_error += 1;
			cout << "��� ������ ������������� ��������!";
		}
	}
	else if (*n == b and flag_error == 0)
	{

		*m = pow(b, 2) + tan(*n * a);

	}
	else if (*n > b and flag_error == 0)
	{
		*m = pow(b, 3) + *n * pow(a, 2);
	}
	if (flag_error >= 1)
	{
		cout << "������� ������ ��������! P.S. a, b �� ����� ��������� 0 � �������, ����� �������� ��� ������ ���� >= 0!";
	}
}
void reader(double* a, double* b)
{
	cout << "������� �������� �: ";
	cin >> *a;
	cout << "������� �������� b:";
	cin >> *b;
}