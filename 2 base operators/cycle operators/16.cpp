/*16. Вывести на экран следующую таблицу:
1
2
2 2
4 4
3 3 3
6 6 6
4 4 4 4
8 8 8 8
*/
//напечатать таблицу
#include<iostream>
using namespace std;
int main() {
	const int n = 4; //
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			cout << i << " ";
		cout << endl;
		for (int j = 1; j <= i; j++)
			cout << 2 * i << " ";
		cout << endl;
	}
}