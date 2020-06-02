#include "Person.h"
#include "Object.h"
#include <iostream>
using namespace std;
Person::Person(void)
{
	name = "";
	age = 0;
}

Person::~Person(void)
{
}

Person::Person(string M, int C)
{
	name = M;
	age = C;
}

Person::Person(const Person& person)
{
	name = person.name;
	age = person.age;
}

void Person::set_age(int C)
{
	age = C;
}
void Person::set_name(string M)
{
	name = M;
}


Person& Person::operator=(const Person& c)
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}

void Person::Show()
{
	cout << "\nNAME : " << name;
	cout << "\nAGE : " << age;
	cout << "\n";
}

void Person::Input()
{
	cout << "\nNAME:"; cin >> name;
	cout << "\nAGE:"; cin >> age;
}
void Person::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		switch (e.command)
		{
		case cmGet:cout << "mark=" << get_name() << endl;
			break;
		}
	}
}