#include "List.h"
#include <iostream>
#include "Pair.h"
using namespace std;

void main()
{
	cout << "vvedite elementi 1th spiska: " << endl;
	List<int>A(5, 0);
	cin >> A;
	cout << A << endl;
	cout << "vvedite elementi 2th spiska: " << endl;
	List<int>B(5, 0);
	cin >> B;
	cout << B << endl;
	cout <<"3th element 1th spiska: "<< A[2] << endl;
	cout << "size=" << A() << endl;
	cout << "Proizv 1th i 2th spiskov: " << endl;
	for (int i = 0; i < 5; i++)
		cout << A[i] * B[i]<< " ";
	Pair t;
	cin >> t;
	cout << t;

}
