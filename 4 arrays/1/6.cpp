//задание 6
/*Вывести номера (нумерация элементов массива начинается с нуля)
элементов, не кратных 𝑋. Ноль не учитывать. Если таких элементов
нет, вывести сообщение*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int main() {
	int n;
	cout << "размер масиива n ="; cin >> n; //ввод размера
	int* a = new int[n];
	cout << "введите элементы массива\n";
	for (int i = 0; i < n; i++) { //заполнение массива
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	//int max = INT_MIN;
	int x;
	cout << "введите x\n";
	cin >> x;
	int s = -1;
	cout << "элементы\n";
	for (int i = 0; i < n; i++)
		if (a[i] && a[i] % x)
		{
			cout << i << endl;
			s = i;
		}
	if (s < 0)  cout << "элементов нетt\n";
	system("pause");
	return 0;
}
