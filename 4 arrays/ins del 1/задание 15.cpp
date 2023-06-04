//После всех элементов, равных 𝑋, вставить 𝑋.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	
	int n = 0;
	cout << "enter n\n";
	cin >> n;
	
	int x = 0;
	cout << "enter x\n";
	cin >> x;
	int* a = new int[n+1];
	cout << "enter array elements\n"; 

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	for (int i = 0; i < n; i++) 
	{
		if (a [i] == x)
		{
			for (int j = n; j>i; j--)
			{
				a[j] = a[j - 1];	
			}
			a[i + 1] = x;
			n++;
			i++;
			
		
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<< a[i];
	}


}