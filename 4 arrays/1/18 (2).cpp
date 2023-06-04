//задание 18
/* Поменять местами первый минимальный и последний максимальный
элементы массива
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main() {
	int i_max, i_min;
	int k, t;
	int n;
	cout << "vvedite razmer massiva n =";
	cin >> n; //размер
	int* a = new int[n];
	cout << "vvedite elementi massiva\n";
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]="; //ввод эл-тов массива
		cin >> a[i];
	}
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {//проверка элементов
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
		
	}//найдены мин и макс массива
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			i_min = i;
				break;
		}
		break;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == max) {
			i_max = i;
		}
	}
	//найдены индексы первого мин и последнего макс
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
	
	k = a[i_max];
	t = a[i_min];
	b[i_max] = t;
	b[i_min] = k;
	for (int i = 0; i < n; i++) //вывод на экран нового массива
		cout << b[i] << " ";
	cout << endl;
	return 0;
}