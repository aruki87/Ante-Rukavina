// Planovi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a1, a2, b1, b2;
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	if ((b1 < a1)|| b1 > a2) {
		cout << b1;
	}
	else {
		cout << b2;
	}

}

