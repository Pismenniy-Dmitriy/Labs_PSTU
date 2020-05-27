#pragma once
#include "Person.h"
class Employee : public Person
{
public:
	Employee(void);
public:
	~Employee(void);
	Employee(string, int, string, double);
	Employee(const Employee &);
	string get_dolzhnost() { return dolzhnost; }
	double get_oklad() { return oklad; }
	void set_dolzhnost(string);
	void set_oklad(double);
	Employee& operator=(const Employee&);
	friend istream& operator >> (istream&in, Employee&l);
	friend ostream& operator << (ostream&out, const Employee&l);
protected:
	string dolzhnost;
	double oklad;
};

