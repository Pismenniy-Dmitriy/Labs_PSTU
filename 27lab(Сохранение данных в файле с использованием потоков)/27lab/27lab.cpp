#include "File.h"	
#include "Money.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main()
{
	Money m, m1, m2, m3;
	int n, k, c, kol;
	char file_name[30];
	do
	{
		cout << "\n1. Make file";
		cout << "\n2. Print file";
		cout << "\n3. Delete object";
		cout << "\n4. Add object";
		cout << "\n5. Modify file";
		cout << "\n6. Delete objects (>value)";
		cout << "\n7. Halve value objects";
		cout << "\n8. Add K objects after the N-object";
		cout << "\n0. Exit\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "File name? "; cin >> file_name;
			k = make_file(file_name);
			if (k < 0) cout << "Error creating a file\n";
			break;

		case 2:
			cout << "File name? "; cin >> file_name;
			k = print_file(file_name);
			if (k == 0) cout << "File is empty\n";
			if (k < 0) cout << "Error opening a file\n";
			break;
		case 3:
			cout << "File name?"; cin >> file_name;
			int nom; cout << "Number? "; cin >> nom;
			k = del_file(file_name, nom);
			if (k < 0) cout << "Error opening a file\n";
			break;
		case 4:
			cout << "File name? "; cin >> file_name;
			cout << "Number? "; cin >> nom;
			cout << "New var:\n";
			cin >> m1;
			k = add_file(file_name, nom, m1);
			if (k < 0) cout << "Error opening a file\n";
			if (k == 0) k = add_end(file_name, m1);
			break;
		case 5:
			cout << "File name? "; cin >> file_name;
			cout << "Number? "; cin >> nom;
			cout << "New var:\n";
			cin >> m2;
			k = chang_file(file_name, nom, m2);
			if (k < 0) cout << "Error opening a file\n";
			if (k == 0) cout << "Object doesn't exist\n";
			break;
		case 6:
			cout << "File name? "; cin >> file_name;
			cout << "Enter the splitting var value:\n";
			cin >> m;
			k = del_bolshe(file_name, m);
			if (k < 0) cout << "Error opening a file\n";
			if (k == 0) cout << "Object doesn't exist\n";
			break;
		case 7:
			cout << "File name? "; cin >> file_name;
			cout << "Enter the var value\n";
			cin >> m3;
			k = doubleDecrease(file_name, m3);
			if (k < 0) cout << "Error opening a file\n";
			if (k == 0) cout << "Object doesn't exist\n";
			break;
		case 8:
			cout << "File name? "; cin >> file_name;
			cout << "Enter the object's number\n";
			cin >> n;
			cout << "Enter the count of objects\n";
			cin >> kol;
			k = add_more(file_name, kol, n);
			if (k < 0) cout << "Error opening a file\n";
			if (k == 0) cout << "Object doesn't exist\n";
			break;
		}
	} while (c != 0);
	system("pause");
}