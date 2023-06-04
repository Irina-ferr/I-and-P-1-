#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int n, i;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter i" << endl;
	cin >> i;

	//1
	cout << "1.";
	cout << (1 << i) << endl;

	//2
	cout << "2.";
	cout << (n | (1 << i)) << endl;

	//3
	cout << "3.";
	cout << (n & ~(i << 1)) << endl;

	//4
	cout << "4.";
	cout << (n ^ (1 << i)) << endl;

	//5
	cout << "5.";
	if (n & 1) {
		cout << "Нечетное" << endl;
	}
	else {
		cout << "Четное" << endl;
	}
}