#include <iostream>
#include <Windows.h>
#include "Student.h"

using namespace std;

int main()
{
	system("chcp 1251");

	cout << endl;

	Person a;

	cin >> a;

	cout << endl << a << endl;

	Person b = a;

	cout << b << endl << endl;

	Student c;

	cout << endl;

	cin.ignore();

	cin >> c;

	c.PrintBadNews();

	cout << endl << c << endl << endl;

	Student e = c;

	cout << endl << e << endl;

	b = e;

	cout << b << endl << endl;
}
