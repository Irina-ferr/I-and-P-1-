//задание 2
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float y1 = -2, y2 = 1, y;
	int n;
	cout << "Введите номер числа\n";
	cout << "n="; cin >> n;
	if (n > 2) { //первые два числа уже известны
		for (int i = 3; i <= n; i++) {
			y = ((y1 + (1.0 / y2))/6); //вычисляем i-ое 
			y1 = y2; //y1 - i-2-ое число на следующем
			y2 = y; //y2 - i-1-oe число на следующем
			}
		cout << "y" << n << "=" << y << endl; //n-oe число 

	}
	else if (n == 1) {
		cout << "y" << n << "=-2\n";
	}
	else if (n == 2) {
		cout << "y" << n << "=1\n";
	}
	return 0;

}