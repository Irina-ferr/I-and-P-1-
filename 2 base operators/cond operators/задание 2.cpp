﻿/*Дано трехзначное число 𝐴 и однозначное число 𝑋. Если все цифры числа 𝐴
больше 𝑋, уменьшить число 𝐴 на 100; если первая и вторая цифры числа 𝐴
больше 𝑋, увеличить число 𝐴 на 100; если все цифры числа 𝐴 меньше 𝑋,
уменьшить число 𝐴 на 50; если вторая и третья цифры числа 𝐴 меньше 𝑋,
увеличить число 𝐴 на 50; в остальных случаях — увеличить число 𝐴 на 10.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int a, x;
	cout << "Введите ТРЕХЗНАЧНОЕ а\n";
	cin >> a;
	cout << "Введите ОДНОЗНАЧНОЕ х\n";
	cin >> x;
	//проверка чисел 
	if ((a < 100) || (a >999) || (x > 9) || (x <= 0)) {
		cout << "Неправильное число\n";
	}
	//если действительно трехзн и однозн
	else {
		//третья цифра а
		int c = a % 10;
		//вторая цифра а
		int d = (a / 10) % 10;
		//первая цифра а
		int e = a / 100;

		if (c > x && d > x && e > x) {
			cout << (a - 100);
		}
		//если первая и вторая цифры числа 𝐴 больше 𝑋, увеличить число 𝐴 на 100;
		else if (e > x && d > x && c < x) {
			cout << (a + 100);
		}
		//eсли все цифры числа 𝐴 меньше 𝑋, уменьшить число 𝐴 на 50;
		else if (c < x && d < x && e < x) {
			cout << (a - 50);
		}
		//если вторая и третья цифры числа 𝐴 меньше 𝑋, увеличить число 𝐴 на 50;
		else if (c < x && d < x && e > x) {
			cout << (a + 50);
		}
		//в остальных случаях — увеличить число 𝐴 на 10.
		else {
			cout << (a + 10);
		}

	}
}