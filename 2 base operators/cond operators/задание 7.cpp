#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float x;
	const float eps = 0.00001;
	cout << "Введите x\n";
	cin >> x;
	if (x < (0 - 5)) {
		cout << "Корень из отрицательного\n";
	}
	else if (x >= 4) {
		cout << "Логарифм из неположительного\n";
	}
	else if (abs(x + 1) < eps) {
		cout << "Деление на ноль\n";
	}
	else {
		cout << ((sqrt(x + 5) + log(8 - 2 * x)) / (sqrt(x * x + 2 * x + 1)));
	}
}