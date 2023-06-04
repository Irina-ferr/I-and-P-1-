//Перед строками, сумма элементов которых кратна 𝑌 , вставить строку X
#include<iostream>

#include<stdlib.h>
using namespace std;
int main() {
	int n, m, i, j,  k, y;
	cout << "Введите размер матрицы n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	cout << "y = \n"; cin >> y;
	int* x = new int [m];
	for (int i = 0; i < m; i++)
		x[i]= 0;
	int** a = new int* [2 * n];
	for (int i = 0; i < 2 * n; i++)
		a[i] = new int[m];
	for (int i = 0; i < n; i++)//ввод массива
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	//найти сумму эл-тов строки
	/*int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += a[i][j];
		}*/
	for (int i = 0; i < n; ++i) {
		/*for (int j = 0; j < m; ++j)*/ //перебор по строкам?
		int sum = 0;
		for (int j = 0; j < m; j++)
			{
			sum += a[i][j];
			}
		if (sum % y==0) {
			for (int k = n; k > i; k--)
				for (int j = 0; j < m; j++)
					a[k][j] = a[k - 1][j];
			for (int j = 0; j < m; ++j)
				a[i][j]=x[j];
			n++;
			i++;
			}
	}
	
	//вывод матрицы
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
}