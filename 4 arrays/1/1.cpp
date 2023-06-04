//задание 1
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus"); //вывод данных русском языке
    int n = 0;
    cout << "Введите размер массива: n=\n";
    cin >> n; //размер массива

    int* a = new int[n]; //выделение памяти под массив
    cout << "Введите элементы массива через enter\n"; //ввод элементов
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int b, c; //ввод диапазона
    cout << "введите левую границу\n";
    cin >> b;
    cout << "введите правую границу\n";
    cin >> c;
    if (b > c) {
        swap(b, c); //замена значений, если b > c
    } 
    int sum = 0;
    for (int i = 0; i < n; i++) //проверка элементов массива
    {
        if ((a[i] % 2 == 0) && ((a[i] >= b) && (a[i] <= c))) {
            //если удовл условиям

            sum += a[i]; //сумма значений элементов увеличивается
        }
    }
        if (sum == 0) {
        cout << "Таких элементов нет\n";
        }
        else {
            cout << "Сумма четных элементов: " << sum;
        }
        cout << endl;
        system("pause");
        return 0;
    
}