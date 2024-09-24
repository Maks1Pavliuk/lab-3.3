// Lab_03_3.cpp
// < Павлюка Максим >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8)
		y = R;
	else
		if (-8 - R < x && x <= -8 + R)
			y = -sqrt(pow(R,2) - pow((x + 18),2));
		else
			if (-8 + R< x && x <= - 4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = (-R+1)/4*x-1;
				else
					y = (1/3) * x -1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}