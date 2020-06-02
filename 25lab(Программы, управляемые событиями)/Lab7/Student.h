#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(void);
public:
	~Student(void);
	void Show();
	void Input();
	Student(string, int, float);
	Student(const Student&);
	int get_rate() { return rate; }
	void set_rate(float);
	Student& operator=(const Student&);
protected:
	float rate;
};

