// snijeg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int vi1;
	int vi2;
	int vi3;
	cin >> x >> vi1 >> vi2 >> vi3;
	if (vi1 - vi2 + vi3 > x) {
		cout << vi1 - vi2 + vi3 << endl << "NE";
	}
	else {
		cout << vi1 - vi2 + vi3 << endl << "DA";
	}
}

