#pragma once
#include "Object.h"
class Vector
{
public:
	Vector(int n);
	~Vector(void);
	void Add();
	void Del();
	void Show();
	void HandleEvent(const TEvent& e);
	int operator()();
protected:
	Object** beg;
	int size;
	int cur;
};
