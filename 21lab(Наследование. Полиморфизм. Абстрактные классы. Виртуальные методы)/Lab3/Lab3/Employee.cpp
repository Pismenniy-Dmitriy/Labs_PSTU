#include "Employee.h"
Employee::Employee(void) :Person()
{
	dolzhnost = "";
	oklad = 0.0;
}
Employee::~Employee(void)
{

}
Employee::Employee(string M,int C, string P, double G):Person(M,C)
{
	dolzhnost = P;
	oklad = G;
}
Employee::Employee(const Employee &L)
{
	name = L.name;
	age = L.age;
	dolzhnost = L.dolzhnost;
	oklad = L.oklad;
}
void Employee::set_dolzhnost(string P)
{
	dolzhnost = P;
}
void Employee::set_oklad(double G)
{
	oklad = G;
}
Employee& Employee::operator=(const Employee&l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	dolzhnost = l.dolzhnost;
	oklad = l.oklad;
	return *this;
}
istream& operator>>(istream&in, Employee&l)
{
	cout << "\nname: "; in >> l.name;
	cout << "\nage: "; in >> l.age;
	cout << "\ndolzhnost: "; in >> l.dolzhnost;
	cout << "\noklad: "; in >> l.oklad;
	return in;
}
ostream& operator<<(ostream&out, const Employee&l)
{
	out << "\nNAME: " << l.name;
	out << "\nAGE: " << l.age;
	out << "\nDOLZHNOST: " << l.dolzhnost;
	out << "\nOKLAD: " << l.oklad;
	return out;
}