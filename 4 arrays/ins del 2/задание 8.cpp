//Перед столбцами, сумма элементов которых кратна 𝑌, вставить столбец X
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m, i, j, k, y;
	cout << "Введите размер матрицы n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	cout << "y = "; cin >> y;

	int** x = new int* [n];
	for (int i = 0; i < n; i++)
		x[i] = new int[1];
	for (int i = 0; i < n; i++)//ввод массива
		for (int j = 0; j < n; j++) {
			x[i][j] = 0;
		}

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m*2];
	for (int i = 0; i < n; i++)//ввод массива
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
			}
		//найти сумму эл-тов столбца
		
	for (int j = 0; j < m; j++) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i][j];
		}
		if (sum % y == 0) {
		}
	
		if (sum % y == 0) {
			
			}
		}
	
		//вывод матрицы
		for (int i = 0; i < n; i++, cout << endl)
			for (int j = 0; j < m; j++)
				cout << a[i][j] << " ";
	}
