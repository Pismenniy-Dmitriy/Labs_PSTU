#include <iostream>
#include "fraction.h"

using namespace std;


fraction make_fraction(int F, double S, double Q)
{
	fraction t;
	t.Init(F, S, Q);
	return t;

}

int main()
{
	fraction A;
	fraction B;
	A.Init(3, 0.7, 2.0);
	fraction*X = new fraction;
	X->Init(3, 0.7, 2.0);
	X->Show();
	X->Multiply();
	cout << "X.Multiply(" << X->first << "," << X->second << ")=" << X->Multiply() << endl;
	fraction mas[3];
	for (int i = 0; i < 3; i++)
	{
		mas[i].Read();
	}
	for (int i = 0; i < 3; i++)
	{
		mas[i].Show();
	}
	for (int i = 0; i < 3; i++)
	{
		mas[i].Multiply();
		cout << "mas[" << i << "].Power(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Multiply() << endl;
	}
	fraction* p_mas = new fraction[3];
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Read();
	}
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Show();
	}
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Multiply();
		cout << "p_mas[" << i << "].Multiply(" << p_mas[i].first << "," << p_mas[i].second;
		cout << ")=" << p_mas[i].Multiply() << endl;
	}
	int y;
	double z;
	double x;
	cout << "first?";
	cin >> y;
	cout << "second?";
	cin >> z;
	cout << "k?";
	cin >> x;
	fraction F = make_fraction(y, z, x);
	F.Show();
	return 0;
}