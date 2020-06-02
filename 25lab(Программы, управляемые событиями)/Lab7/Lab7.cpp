#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Object.h"
#include "Vector.h"
#include "Dialog.h"
#include "Event.h"
using namespace std;

void main()
{
	Person* a = new Person;
	a->Input();
	Student* b = new Student; 
	b->Input();
	Vector v(10);
	Object* p = a;
	v.Add();
	p = b;
	v.Add(); 
	v.Show();
	v.Del();
	cout << "\nVector size=" << v() << endl;
	Dialog D;
	D.Execute();
}