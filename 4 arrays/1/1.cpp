//������� 1
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus"); //����� ������ ������� �����
    int n = 0;
    cout << "������� ������ �������: n=\n";
    cin >> n; //������ �������

    int* a = new int[n]; //��������� ������ ��� ������
    cout << "������� �������� ������� ����� enter\n"; //���� ���������
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int b, c; //���� ���������
    cout << "������� ����� �������\n";
    cin >> b;
    cout << "������� ������ �������\n";
    cin >> c;
    if (b > c) {
        swap(b, c); //������ ��������, ���� b > c
    } 
    int sum = 0;
    for (int i = 0; i < n; i++) //�������� ��������� �������
    {
        if ((a[i] % 2 == 0) && ((a[i] >= b) && (a[i] <= c))) {
            //���� ����� ��������

            sum += a[i]; //����� �������� ��������� �������������
        }
    }
        if (sum == 0) {
        cout << "����� ��������� ���\n";
        }
        else {
            cout << "����� ������ ���������: " << sum;
        }
        cout << endl;
        system("pause");
        return 0;
    
}