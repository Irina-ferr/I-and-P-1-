//������� ��� ������, ���������� ���� �� ���� ������� x
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
		a[i] = new int[m];
	for (i = 0; i < n; i++)//���� �������
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}

	//�������� ��-��� �� ��������� �
	for (j = 0; j < m; j++) {
		bool fl = false;
		for (i = 0; i < n; i++) {
			if (a[i][j] == x) {
				fl = true;
				break;
			}
		}//�������� ����� � �
		if (fl) {
			for (k = 0; k < n-1; k++) {
				for (j = 0; j < m; j++) {
					a[k][j] = a[k+1][j];
				}
			}
			n--;
			i--;
		}
	}

	//����� ���������� �������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
}
