// Lab_03_4.cpp
// < Шетеля Василь >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.6

#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
    // розгалуження в повній формі
	if ((x - x*0)*(x - x*0) + (y - y*0)*(y - y*0) >= R * R ||
		(x - x * 0) + (y - y * 0) == R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

