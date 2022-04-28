#include "Header.h"

int main()
{
	//double a = 4.8, b = -7.9, n = 0, m = 0;

	setlocale(LC_ALL, "rus");
	double a = 0, b = 0, n = 0, m = 0;
	reader(&a, &b);
	formul(a, b, &n, &m);
	if ((m != 0 or n != 0))
	{
		cout << "a = " << a << "\t b = " << b << "\t n = " << n << "\t m = " << m << endl;
	}
}