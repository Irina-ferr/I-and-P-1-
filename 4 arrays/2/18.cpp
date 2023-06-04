#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m;
	n = 5;
	m = 5;
	int k = 0, t = 5;
		
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	for (int i = 0; (i < n)&&(k <n*m); i++)//ввод матрицы
		if (i % 2 == 0) {
			for (int j = 4; j >= 0; j--) {
				a[i][j]=k;
				k++;
			}
			
		}
		else {
			for (int j = 0; j < n; j++) {
				a[i][j] =t;
				t++;
			}
			
		}
		
	//вывод матрицы a
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
	return 0;
}