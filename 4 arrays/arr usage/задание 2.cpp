#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Введите n = ";//создание массивов
	cin >> n;
	double *s = new double[n + 1]; 
	double* s_1 = new double[n + 2]; 
	//заполнение
	for (int i = 0; i <= n; i++) 
	{ 
		cout << "s [" << i << "] = ";
		cin >> s[i];
	}
	cout << endl;
	//вычисление
	s_1[0] = 0; 
	for (int i = 1; i <= n + 1; i++) 
	{
		s_1[i] = s[i - 1] / i;
	}
	cout << endl;
	//вывод
	for (int i = 0; i <= n + 1; i++) 
	{ 
		cout << s_1[i] << " ";
	}
	
}