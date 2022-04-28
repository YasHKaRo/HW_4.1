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
			cout << "Деление на ноль даёт бесконечность!";
			flag_error += 1;
		}
	}
	if (*n < b and flag_error == 0)
	{
		*m = ((*n + a) / (-b)) + pow(pow(sin(a), 2) - cos(*n), (double)1 / (double)2);
		if (pow(sin(a), 2) - cos(*n) < 0)
		{
			flag_error += 1;
			cout << "Под корнем отрицательное значение!";
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
		cout << "Введите другие значения! P.S. a, b не могут равняться 0 и следите, чтобы значение под корнем было >= 0!";
	}
}
void reader(double* a, double* b)
{
	cout << "Введите значение а: ";
	cin >> *a;
	cout << "Введите значение b:";
	cin >> *b;
}