//������� 2
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float y1 = -2, y2 = 1, y;
	int n;
	cout << "������� ����� �����\n";
	cout << "n="; cin >> n;
	if (n > 2) { //������ ��� ����� ��� ��������
		for (int i = 3; i <= n; i++) {
			y = ((y1 + (1.0 / y2))/6); //��������� i-�� 
			y1 = y2; //y1 - i-2-�� ����� �� ���������
			y2 = y; //y2 - i-1-oe ����� �� ���������
			}
		cout << "y" << n << "=" << y << endl; //n-oe ����� 

	}
	else if (n == 1) {
		cout << "y" << n << "=-2\n";
	}
	else if (n == 2) {
		cout << "y" << n << "=1\n";
	}
	return 0;

}