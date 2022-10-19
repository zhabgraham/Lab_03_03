// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23


#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = -sqrt(R * R - x * x - 14 * x - 49) + R;
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 <= x && x < 0)
					y = (R / 4) * (x + 8);
				else
					if (0 < x && x <= pi)
						y = sin(x);
					else
						y = x - pi;

	cout << endl;
	cout << "y = " << y << endl;

	system("pause");
	return 0;
}