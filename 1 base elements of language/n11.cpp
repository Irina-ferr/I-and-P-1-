/*Дано трехзначное целое число 𝑋.
Найти сумму всех его цифр, произведение всех цифр.
Вывести новое число 𝑌, поменяв местами первую и третью цифру
числа 𝑋.*/
//задание 11
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;int main() {
	setlocale(LC_ALL, "RUS");
	int x;
	cout << "Введите трехзначное число";
	cin >> x;

	int a, b, c;
	a = x % 10; //3
	x /= 10;
	b = x % 10; //2
	c = x / 10; //1
	int y;
	y = (a * 100 + b * 10 + c);
		cout << "Результат";
		cout << y;
	system("pause");
	return 0;

}