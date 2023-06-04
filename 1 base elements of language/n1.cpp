//вычислить функцию F
//задание 1
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;int main() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;	float f = (1.0 / 2) * ((sqrt(exp(x * x + y * y))) - (y * x)) / (x * x + y * y) + (log((sqrt(x * x * x * x)) / (sqrt(y * y * y * y))));	cout << "Результат: " << f << endl;	system("pause");
	return 0;
}