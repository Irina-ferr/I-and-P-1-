//18. ������� ��� �������, ���������� ���� �� ���� �������, ������� X
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m, i, j, k, x;
	cout << "������� ������ ������� n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	cout << "x = "; cin >> x;
	int l = n;
	int** a = new int* [n];
	for (i = 0; i < n; i++)
		a[i] = new int[m * 2];
	for (i = 0; i < n; i++)//���� �������
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	
	//�������� ��-��� �� ��������� �
	for (j = 0; j < m; j++) {
		bool fl = false;
		for ( i = 0; i < l; i++) {
			if (a[i][j] % x==0) {
				fl = true;
				break;
			}
		}//�������� �������� � �
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

	//����� ���������� �������
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
}
