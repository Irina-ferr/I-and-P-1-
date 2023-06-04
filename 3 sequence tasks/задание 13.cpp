#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"RUS")
	float x, eps=0.00001, a1, d, s=0; 
	// d - разность между двумя соседними членами 
	int n=1, N, m=1; 
	// N к во чисел для проверки сходимости 
	//m  параметр для выделения d
	cout << "Введите x= "; cin >> x;
	cout << "Введите N= "; cin >> N;
	a1=1;
	// разн суммы ряда a от (n+1) и суммы ряда a от (n)
	d= - ( x * x / (m * (m + 1))); 
		for(n; n<=N; n++){
		// если не сходится,увеличить сумму рядв
		if (abs(a1*d-a1) > eps && n<N){ 
			s += a1;
			a1=a1*d;
			m+=2;
		} else if (abs(a1*d-a1) > eps && n>=N){
			cout<< "Ряд не сходится\n"<< endl; // если не сошелся после проверки всех  N
			return 0;
		} else if (abs(a1*d-a1) < eps) { // если ряд сошелся в N
			cout << s << endl;
			return 0;
		}
	}	
}

