#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int m, day, yea;
	cout << " ���������� ������� m= \n";
	cin >> m;
	cout << " ���������� ���� n= \n";
	cin >> day;
	day = day + 1;
	int mon;
	mon = m % 12;
	//+1 ������ ��� ������ � 1 ������ 
	if (mon < 0) {
		cout << "������������ ���-�� �������  ";
	}
	else if (day <= 0 || day > 20) {
		cout << "���-�� ���� �� ������������� ������� ";
	}
	else {
		yea = 2000 + (m / 12);

		cout << "����\n";
		cout << day;
		switch (mon) {
		case 0:
			cout << "_������_"; break;
		case 1:
			cout << "_�������_"; break;
		case 2:
			cout << "_�����_"; break;
		case 3:
			cout << "_������_"; break;
		case 4:
			cout << "_���_"; break;
		case 5:
			cout << "_����_"; break;
		case 6:
			cout << "_����_"; break;
		case 7:
			cout << "_�������_"; break;
		case 8:
			cout << "_��������_"; break;
		case 9:
			cout << "_�������_"; break;
		case 10:
			cout << "_������_"; break;
		case 11:
			cout << "_�������_"; break;

		}
		cout << yea;
	}
}
