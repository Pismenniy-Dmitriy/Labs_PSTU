#include<iostream>
#include<string>
#include "Abitur.h"
using namespace std;
Abitur make_Abitur()
{
	string s;
	string i;
	int d;
	cout << "Vvedite FIO:";
	cin >> s;
	cout << "Vvdeite Specialnost";
	cin >> i;
	cout << "Vdeite ball EGE";
	cin >> d;
	Abitur t(s, i, d);
	return t;
}
void print_Abitur(Abitur t)
{
	t.show();
}
void main()
{
	Abitur t1;
	t1.show();
	Abitur t2("Ivanov.D.A", "Math", 200);
	t2.show();
	Abitur t3 = t2;
	t3.set_FIO("Filatov.N.A");
	t3.set_Spec("Biology");
	t3.set_EGE(210);
	print_Abitur(t3);
	t1 = make_Abitur();
	t1.show();
}