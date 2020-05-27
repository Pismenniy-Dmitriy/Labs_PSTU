#include <iostream>
#include "Person.h"
#include "Employee.h"
using namespace std;
void f1(Person&c)
{
	c.set_name("Dmitriy");
	cout << c;
}
Person f2()
{
	Employee l("Alex", 26, "Private", 50.750);
	return l;
}
void main()
{
	Person a;
	cin >> a;
	cout << a;
	Person b("Ivan", 26);
	cout << b;
	a = b;
	cout << a;

	Employee c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
	cout << a;

}