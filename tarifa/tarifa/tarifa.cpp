// tarifa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, n, p, x2;
	cin >> x;
	cin >> n;
	x2 = x;
	for (int i = 0; i < n; i++) {
		
		cin >> p;
		x2 -= p;
		x2 += x;

	}
	cout << x2 << endl;
}
