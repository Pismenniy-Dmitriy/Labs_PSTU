#include <iostream>
#include <fstream>
#include "File.h"
#include "Search.h"
#include <Windows.h>
using namespace std;


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Razmer: ";
	cin >> size;
	DVD* mas = new DVD[size];
	mas = input(mas, size);
	output();
	search();
}