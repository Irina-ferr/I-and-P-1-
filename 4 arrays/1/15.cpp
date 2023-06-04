//задание 15
/* Вывести номера всех максимальных четных элементов. Нумерация
начинается с нуля. Если таких элементов нет, то вывести сообщение об
этом.
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main() {
	int n;
	cout << "vvedite razmer massiva n =";
	cin >> n; //размер
	int* a = new int[n];
	cout << "vvedite elementi massiva\n";
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]="; //ввод эл-тов массива
		cin >> a[i];
	}
	int max = INT_MIN; //минмальное значение для int 
	for (int i = 0; i < n; i++) {//поиск макс четного
		if (!(a[i] % 2) && a[i] > max) {
			max = a[i];
		}
		if (max == INT_MIN) {//если не нашлось большего четного элемента
			cout << "chennih elementov net\n";
		}
		else {
			cout << "nomera max chetnih elementov\n";
			for (int i = 0; i < n; i++) {//вывести четные
				if (a[i] == max) {
					cout << i << " ";
				}
			}
		}
		cout << endl;
		return 0;
	}
}