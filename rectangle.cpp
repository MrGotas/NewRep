#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int oneSd, twoSd;
	cout << "Введите длины двух сторон прямоугольника:" << endl;
	cin >> oneSd >> twoSd;
	if (oneSd <= 0 || twoSd <= 0) {
		cout << "Нужны положительные стороны" << endl;
		return 0;
	}
	cout << "Периметр: " << (oneSd + twoSd) * 2 << endl;
	cout << "Площадь: " << oneSd * twoSd << endl;
	cout << "!!!! Длина каждой диагонали:" << pow(pow(oneSd, 2) + pow(twoSd, 2), 0.5) << endl;
	return 0;
}
