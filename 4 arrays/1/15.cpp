//������� 15
/* ������� ������ ���� ������������ ������ ���������. ���������
���������� � ����. ���� ����� ��������� ���, �� ������� ��������� ��
����.
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main() {
	int n;
	cout << "vvedite razmer massiva n =";
	cin >> n; //������
	int* a = new int[n];
	cout << "vvedite elementi massiva\n";
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]="; //���� ��-��� �������
		cin >> a[i];
	}
	int max = INT_MIN; //���������� �������� ��� int 
	for (int i = 0; i < n; i++) {//����� ���� �������
		if (!(a[i] % 2) && a[i] > max) {
			max = a[i];
		}
		if (max == INT_MIN) {//���� �� ������� �������� ������� ��������
			cout << "chennih elementov net\n";
		}
		else {
			cout << "nomera max chetnih elementov\n";
			for (int i = 0; i < n; i++) {//������� ������
				if (a[i] == max) {
					cout << i << " ";
				}
			}
		}
		cout << endl;
		return 0;
	}
}