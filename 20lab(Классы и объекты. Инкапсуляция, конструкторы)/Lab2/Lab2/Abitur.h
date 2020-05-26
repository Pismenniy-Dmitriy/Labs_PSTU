#include<iostream>
#include<string>
using namespace std;
class Abitur
{
	string FIO;
	string Spec;
	int EGE;
public:
	Abitur();
	Abitur(string, string, int);
	Abitur(const Abitur&);
	~Abitur();
	string get_FIO();
	void set_FIO(string);
	string get_Spec();
	void set_Spec(string);
	int get_EGE();
	void set_EGE(int);
	void show();
};

