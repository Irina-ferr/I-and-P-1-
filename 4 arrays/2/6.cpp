/* Ќайти первый минимальный и первый максимальный элементы
массива. ѕоиск вести построчно. ѕомен€ть местами строки,
содержащие эти элементы*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m;
	cout << "¬ведите размер матрицы n*m\n";
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
	int min = INT_MAX;
	int max = INT_MIN;
	int i_max, i_min;
	int j_max, j_min;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}//найдены мин и макс
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (a[i][j] == min) {
				i_min = i;
				
				//найдены индексы мин
				break;
			}
			break;
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (a[i][j] == max) {
				i_max = i;
				
				//найдены индексы макс
				break;
			}
			break;
		}
	//создание нового массива b, сменить строчки i min и i max
	int** b = new int* [n];
	for (int i = 0; i < n; i++)
		b[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			a[i][j] = b[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int k = a[i_max][j];
			int t = a[i_min][j];
			b[i_max][j] = t;
			b[i_min][j] = k;
			}
	//вывод матрицы b
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < n; j++)
			cout << b[i][j] << " ";
	return 0;
	
}
