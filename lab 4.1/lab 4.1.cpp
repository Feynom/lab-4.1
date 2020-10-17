#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, k, n;
	double s;

	cout << "Введіть значення 'N':"; cin >> n; cout << endl;
	cout << "Введіть значення 'k':"; cin >> k; cout << endl;

	s = 0;
	i = k;
	while (i <= n)
	{
		s += pow(i, 2.) / (pow(k, 2.) + pow(n, 2.));
		i++;
	}
	cout << "1.Результат:" << s << endl;

	s = 0;
	i = k;
	do
	{
		s += pow(i, 2.) / (pow(k, 2.) + pow(n, 2.));
		i++;
	} while (i <= n);
	cout << "2.Результат:" << s << endl;

	s = 0;
	for (i=k; i <= n; i++)
	{
		s += pow(i, 2.) / (pow(k, 2.) + pow(n, 2.));
	}
	cout << "3.Результат:" << s << endl;

	s = 0;
	for (i = n; i >= k; i--)
	{
		s += pow(i, 2.) / (pow(k, 2.) + pow(n, 2.));
	}
	cout << "4.Результат:" << s << endl;

	cin.get();
	return 0;
}