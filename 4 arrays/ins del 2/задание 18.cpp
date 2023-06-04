//18. ”далить все столбцы, содержащие хот€ бы один элемент, кратный X
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m, i, j, k, x;
	cout << "¬ведите размер матрицы n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	cout << "x = "; cin >> x;
	int l = n;
	int** a = new int* [n];
	for (i = 0; i < n; i++)
		a[i] = new int[m * 2];
	for (i = 0; i < n; i++)//ввод массива
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	
	//проверка эл-тов на кратность х
	for (j = 0; j < m; j++) {
		bool fl = false;
		for ( i = 0; i < l; i++) {
			if (a[i][j] % x==0) {
				fl = true;
				break;
			}
		}//удаление столбцов с х
		if (fl) {
			for (k = j; k < m - 1; k++) {
				for ( i = 0; i < l; i++) {
					a[i][k] = a[i][k + 1];
				}
			}
			m--;
			j--;
		}
	}

	//вывод полученной матрицы
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
}
