#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "RUS")
	float x, eps=0.00001, a1, d, s=0; // d - разность между двумя соседними членами 
	int n = 1, N; // N к во чисел для проверки сходимости 
	cout << "x = "; cin >> x;
	cout << "N = "; cin >> N;
	a1 = (pow(-1, n - 1) * pow(x,n)) / n;
	d = -(x * n / (n + 1));// разн суммы ряда a от (n+1) и суммы ряда a от (n)
	for(n; n<=N; n++){
		if (abs (a1 * d - a1) > eps && n<N){ // если не сходится,увеличить сумму рядв
			s += a1;
			a1 = a1 * d;
		} else if (abs(a1*d-a1) > eps && n >= N){
			cout << "Ряд не сходится\n" << endl; // если не сошелся после проверки всех  N
			return 0;
		} else if (abs (a1 * d - a1) < eps) { // если ряд сошелся в пределах N
			cout << s << endl;
			return 0;
		}
	}	
}
