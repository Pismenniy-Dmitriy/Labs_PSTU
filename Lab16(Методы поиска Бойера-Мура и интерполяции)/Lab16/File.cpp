#include "File.h"
#include <iostream>
#include <fstream>
using namespace std;

void output()
{
	ifstream fin("DVD.txt");

	if (!fin.is_open())
	{
		cout << "404" << endl;
	}

	else
	{
		char data;
		while (fin.get(data))
		{
			cout << data;
		}
	}

	cout << endl;
}

DVD* input(DVD* mas, int size)
{
	ofstream of("DVD.txt", ios::trunc);
	of.close();

	fstream f;
	f.open("DVD.txt");

	if (!f.is_open())
	{
		cout << " " << endl;
	}

	else
	{
		for (int i = 1; i <= size; i++)
		{
			cout << " ";
			cin >> mas[i].title;
			f << "\n" << " " << i << "\n" << " " << mas[i].title;

		}
	}

	return mas;
}