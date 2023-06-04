#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, n1;
	float a;
	cout << "a = "; cin >> a;
	cout << "n = "; cin >> n;
	int* res = new int[n + 3]; //создание массива
	res[0] = 0;
	res[1] = 0;
	for (int i = 0; i < n + 1; i++)//вычисления рекурсия
	{
		cin >> n1;
		res[i + 2] = n1;
		res[i] += (-a) * n1;
	}
	cout << endl;
	for (int i = 0; i < n + 3; i++)
	{
		cout << res[i] << " ";
	} //результат вывод

	cout << endl;
	
}