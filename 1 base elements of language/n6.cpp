//вычислить функцию F
//задание 6
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;int main() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;	float f = sqrt((exp(sqrt(cos((x + y) / (x - y))))) + (sin(log(2)*x*y*y)));	cout << "Результат: " << f << endl;	system("pause");
	return 0;
}