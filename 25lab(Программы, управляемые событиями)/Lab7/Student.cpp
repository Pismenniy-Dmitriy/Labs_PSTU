#include "Student.h"
Student::Student(void) :Person()
{
	rate = 0;
}
Student::~Student(void)
{
}
Student::Student(string M, int C, float P) :Person(M, C)
{
	rate = P;
}
Student::Student(const Student& L)
{
	name = L.name;
	age = L.age;
	rate = L.rate;
}
void Student::set_rate(float P)
{
	rate = P;
}
Student& Student::operator=(const Student& l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	return *this;
}
void Student::Show()
{
	cout << "\nNAME : " << name;
	cout << "\nAGE : " << age;
	cout << "\nRATE : " << rate;
	cout << "\n";
}
void Student::Input()
{
	cout << "\nName:"; cin >> name;
	cout << "\nAge:"; cin >> age;
	cout << "\nRate : "; cin >> rate;
}
