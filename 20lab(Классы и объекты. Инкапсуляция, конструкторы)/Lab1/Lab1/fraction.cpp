#include<iostream>
#include"fraction.h"

using namespace std;

void fraction::Init(int F, double S, double Q)
{
	first = F;
	second = S;
	k = Q;
}
void fraction::Read()
{
	cout << "\nfirst?";
	cin >> first;
	cout << "\nsecond?";
	cin >> second;
	cout << "\nk?";
	cin >> k;
}
void fraction::Show()
{
	cout << "\nfirst=" << first;
	cout << "\nsecond=" << second;
	cout << "\nk=" << k;
	cout << "\n";
}
double fraction::Multiply()
{
	return (first+second)*k;
}