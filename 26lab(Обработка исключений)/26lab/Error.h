#pragma once

#include <string>

#include <iostream>

using namespace std;

class error 

{

	string str;

public:
	void what() { cout << str << endl; } 

};