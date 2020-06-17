#include "List.h"
#include "Error.h"
#include <iostream>

using namespace std;

int main()

{

	try

	{
		List x(2);

		List y;

		cout << x;

		cout << "Number?";

		int i;

		cin >> i;

		cout << x[i] << endl;

		y = x - 1;

		cout << y;
	}

	catch (error e)

	{
		e.what();
	}

	return 0;

}
