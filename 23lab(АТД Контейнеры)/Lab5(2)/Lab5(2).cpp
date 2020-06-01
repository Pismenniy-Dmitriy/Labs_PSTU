#include <iostream>
#include "Vector.h"
using namespace std;

void main()
{
	Vector a(5);
	cout << a << "\n";
	cin >> a;
	cout << a << "\n";
	a[2] = 100;
	cout << a << "\n";
	Vector b(10);
	cout << b << "\n";
	Vector c(10);
	c = b + 50;
	cout << c << "\n";
	cout << "\nthe length of a=" << a() << endl;
	cout << "First elem:" << *(a.first()) << endl;
	Iterator j = a.first();
	cout << "Vvedite nomer elementa dlya perehoda:" << endl;
	int n;
	cin >> n;
	cout << "Element pod nomerom " << n << " : ";
	for (int i = 1; i < n; i++)
	{
		++j;
	}
	cout << *j << endl;
	cout << "Vivod znachenii elementov s pom. iteratora: "<< endl;
	for (j = a.first(); j != a.last(); ++j)cout << *j << endl;
}