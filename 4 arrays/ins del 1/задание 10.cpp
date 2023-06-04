//Удалить все двузначные элементы.
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	//array size
	int n = 0;
	cout << "enter n\n";
	cin >> n;
	int* a = new int[n];
	cout << "enter array elements\n"; //array filling
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int j;
	for (int i = 0; i < n; i++) // delete if number ==x
	{
		if (a[i]>9 && a[i] <100)
		{
			for (int j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<",";
		
	}


}