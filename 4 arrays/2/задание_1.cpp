/*1) �������� ������� ������ �� ���������� �������: ������ �
���������, ������ � ������������� � �. �.*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n, m;
	cout << "������� ������ ������� n*m\n";
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	for (int i = 0; i < n; i++)//���� �������
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	for (int i = 0; i < n / 2; i++) { //����� ��������
		for (int j = 0; j < m; j++) {
			swap(a[i][j], a[n - 1 - i][j]);
		
		}
	}
	//����� �������
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
	return 0;

}