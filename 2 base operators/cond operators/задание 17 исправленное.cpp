#include <iostream>
#include <cmath>
using namespace std;
//������ 17
int main() {
	setlocale(LC_ALL, "RUS");
	const float eps = 0.00001;
	float a, b, c;
	cout << "������� a\n";
	cin >> a;
	cout << "������� b\n";
	cin >> b;
	cout << "������� c\n";
	cin >> c;
	cout << "�������������� ������������\n";
	//���������� �� �����������?
	if ((a + b) > c || (b + c) > a || (a + c) > b) {
		cout << "����������� ����������\n";
		//�������
		float p, S;
		p = (a + b + c) / 2.0;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "������� ������������\n";
		cout << S;
		//������ ��������� ���
		float Rv;
		Rv = sqrt(((p - a) * (p - b) * (p - c)) / p);
		cout << "������ ��������� ����������\n";
		cout << Rv;
		//������ ��������� ���
		float Ro;
		Ro = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
		cout << "������ ��������� ����������\n";
		cout << Ro;

		//���� ��������������
		if ((a - b) < eps && (a - c) < eps) {
			cout << "����������� ��������������\n";
			// ������ (�������, ������������)
			float h;
			h = (a * sqrt(3)) / 2;
			cout << "������";
			cout << h;
		}

		//�������������� �������������?
		else if ((b - c) < eps && a- (b * sqrt (2)) < eps) {
			//���������� ������ � ����������
			cout << "����������_\n";
			cout << "a";
			cout << "������_\n";
			cout << "b";
			cout << "c";
			//���������� ������� � ������ �� ������� ����
			cout << "������ (�������)_\n";
			cout << (a / 2);
		}
		else if ((a - c) < eps && b - (a * sqrt(2)) < eps) {
			//���������� ������ � ����������
			cout << "����������_\n";
			cout << "b";
			cout << "������_\n";
			cout << "a";
			cout << "c";
			//���������� ������� � ������ �� ������� ����
			cout << "������ (�������)_\n";
			cout << (b / 2);
		}
		else if ((b - a) < eps && c - (b * sqrt(2)) < eps) {
			//���������� ������ � ����������
			cout << "����������_\n";
			cout << "c";
			cout << "������_\n";
			cout << "a";
			cout << "b";
			//���������� ������� � ������ �� ������� ����
			cout << "������ (�������)_\n";
			cout << (c / 2);
		}

		//���� �������������
		else if (a == sqrt(b * b + c * c) || b == sqrt(a * a + c * c) || c == sqrt(b * b + a * a)) {
			cout << "����������� �������������\n";
			float h;
			float med;
			//���������� ������ � ����������
			if (a > b && a > c) {
				cout << "����������_\n";
				cout << "a";
				cout << "������_\n";
				cout << "b";
				cout << "c";
				//���������� ������
				h = ((b * c) / a);
				cout << "������_\n";
				cout << h;
				//���������� ������� �� ������� ����
				med = a / 2;
				cout << "�������_\n";
				cout << med;
			}
			else if (b > a && b > c) {
				cout << "����������_\n";
				cout << b;
				cout << "������_\n";
				cout << a;
				cout << c;
				//���������� ������
				h = ((a * c) / b);
				cout << "������_\n";
				cout << h;
				//���������� ������� �� ������� ����
				med = b / 2;
				cout << "�������_\n";
				cout << med;
			}
			else if (c > b && c > a) {
				cout << "����������_\n";
				cout << "c";
				cout << "������_\n";
				cout << "a";
				cout << "b";
				//���������� ������
				h = ((a * b) / c);
				cout << "������_\n";
				cout << h;
				//���������� ������� �� ������� ����
				med = c / 2;
				cout << "�������_\n";
				cout << med;
			}

			//���� ��������������
			else if (a == b) {
				//���������� ��������� � ������� �������
				cout << "��������� \n";
				cout << "c";
				cout << "������� ������� \n";
				cout << "a";
				cout << "b";
				//������ �� ���������
				cout << "������ \n";
				cout << (sqrt(a * a - (c * c / 4)));
			}
			else if (b == c) {
				//���������� ��������� � ������� �������
				cout << "��������� \n";
				cout << "a";
				cout << "������� ������� \n";
				cout << "b";
				cout << "c";
				//������ �� ���������
				cout << "������ \n";
				cout << (sqrt(b * b - (a * a / 4)));
			}
			else if (a == c) {
				//���������� ��������� � ������� �������
				cout << "��������� \n";
				cout << "b";
				cout << "������� ������� \n";
				cout << "a";
				cout << "c";
				//������ �� ���������
				cout << "������ \n";
				cout << (sqrt(a * a - (b * b / 4)));
			}


			//��������������
			else {
				cout << "����������� ��������������\n";
			}

		}
		else {
			cout << "������������ �� ����������";
		}
	}