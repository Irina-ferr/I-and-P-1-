#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m;//размер
	int k = 0, summ = 0;//к-во нечетных и сумма нечетных
	cout << "Введите размер матрицы n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	for (int i = 0; i < n; i++)//ввод матрицы
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((j <= i && j <= n - 1 - i) || (j >= i && j >= n - 1 - i)) { //обозначение области поиска
				if (a[i][j] % 2 == 1) {
					summ = summ + a[i][j];
					k++;
				}
			}
	if (k == 0) {
		cout << "Нечетных элементов нет" << endl;
	}
	else
		cout << summ / (k * 1.0);
}