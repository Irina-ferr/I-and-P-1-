#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int m, day, yea;
	cout << " количество мес€цев m= \n";
	cin >> m;
	cout << " количество дней n= \n";
	cin >> day;
	day = day + 1;
	int mon;
	mon = m % 12;
	//+1 потому что отсчет с 1 €нвар€ 
	if (mon < 0) {
		cout << "неправильное кол-во мес€цев  ";
	}
	else if (day <= 0 || day > 20) {
		cout << "кол-во дней не удовлетвор€ет условию ";
	}
	else {
		yea = 2000 + (m / 12);

		cout << "дата\n";
		cout << day;
		switch (mon) {
		case 0:
			cout << "_€нвар€_"; break;
		case 1:
			cout << "_феврал€_"; break;
		case 2:
			cout << "_марта_"; break;
		case 3:
			cout << "_апрел€_"; break;
		case 4:
			cout << "_ма€_"; break;
		case 5:
			cout << "_июн€_"; break;
		case 6:
			cout << "_июл€_"; break;
		case 7:
			cout << "_августа_"; break;
		case 8:
			cout << "_сент€бр€_"; break;
		case 9:
			cout << "_окт€бр€_"; break;
		case 10:
			cout << "_но€бр€_"; break;
		case 11:
			cout << "_декабр€_"; break;

		}
		cout << yea;
	}
}
