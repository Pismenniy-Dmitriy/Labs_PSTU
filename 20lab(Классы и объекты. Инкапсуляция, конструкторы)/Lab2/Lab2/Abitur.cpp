#include<iostream>
#include<string>
#include "Abitur.h"
using namespace std;

Abitur::Abitur()
{
	FIO = "";
	Spec = "";
	EGE = 0;
	cout << "Constructor bez parametrov dlya objecta " << this << endl;
}
Abitur::Abitur(string N, string S, int A)
{
	FIO = N;
	Spec = S;
	EGE = A;
	cout << "Constructor s parametrami dlya objecta " << this << endl;
}
Abitur::Abitur(const Abitur &t)
{
	FIO = t.FIO;
	Spec = t.Spec;
	EGE = t.EGE;
	cout << "Constructor copirovania dlya objecta " << this << endl;
}
Abitur::~Abitur()
{
	cout << "Destrucktor dlya objecta " << this << endl;
}
string Abitur::get_FIO()
{
	return FIO;
}
string Abitur::get_Spec()
{
	return Spec;
}
int Abitur::get_EGE()
{
	return EGE;
}
void Abitur::set_FIO(string N)
{
	FIO = N;
}
void Abitur::set_Spec(string S)
{
	Spec = S;
}
void Abitur::set_EGE(int A)
{
	EGE = A;
}
void Abitur::show()
{
	cout << "FIO : " << FIO << endl;
	cout << "Spec : " << Spec << endl;
	cout << "EGE : " << EGE << endl;
}